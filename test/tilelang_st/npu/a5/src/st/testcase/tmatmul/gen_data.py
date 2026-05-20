# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software, you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You can not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.

# coding=utf-8

import os
import struct
import numpy as np
import ml_dtypes

bfloat16 = ml_dtypes.bfloat16

from cases import CASES
from st_common import setup_case_rng


def float32_to_tf32(x, round_mode="CAST_RINT"):
    packed = struct.pack("f", x)
    bits = struct.unpack("I", packed)[0]
    sign = (bits >> 31) & 0x1
    exponent = (bits >> 23) & 0xFF
    mantissa = bits & 0x7FFFFF
    if exponent == 0xFF:
        if mantissa != 0:
            return float("nan")
        return float("inf") * (-1 if sign else 1)
    if exponent == 0 and mantissa == 0:
        return 0.0 if sign == 0 else -0.0
    if exponent == 0 and mantissa != 0:
        actual_value = struct.unpack("f", struct.pack("I", bits))[0]
        if abs(actual_value) < 1e-30:
            return 0.0 if sign == 0 else -0.0
    mantissa_10bit = mantissa >> 13
    lost_bits = mantissa & 0x1FFF
    round_bit = (lost_bits >> 12) & 0x1
    sticky_bit = 1 if (lost_bits & 0xFFF) != 0 else 0
    if round_mode == "CAST_RINT":
        if round_bit == 1:
            if sticky_bit == 1:
                mantissa_10bit += 1
            else:
                if mantissa_10bit & 0x1:
                    mantissa_10bit += 1
    elif round_mode == "CAST_ROUND":
        if round_bit == 1 and (sticky_bit == 1 or mantissa_10bit & 0x1):
            mantissa_10bit += 1
    if mantissa_10bit >= 0x400:
        mantissa_10bit >>= 1
        exponent += 1
    if exponent >= 0xFF:
        return float("inf") if sign == 0 else -float("inf")
    tf32_mantissa = mantissa_10bit << 13
    tf32_bits = (sign << 31) | (exponent << 23) | tf32_mantissa
    return struct.unpack("f", struct.pack("I", tf32_bits))[0]


for case in CASES:
    setup_case_rng(case)
    case_name = case["name"]
    M, K, N = case["M"], case["K"], case["N"]
    dtype_a = case["dtype_a"]
    dtype_b = case["dtype_b"]
    dtype_c = case["dtype_c"]

    if not os.path.exists(case_name):
        os.makedirs(case_name)

    if case_name == "case1_f16_40x50x60":
        lhs = np.random.uniform(-1.0, 1.0, size=(M, K)).astype(np.float16)
        rhs = np.random.uniform(-1.0, 1.0, size=(K, N)).astype(np.float16)
        golden = np.matmul(lhs.astype(np.float32), rhs.astype(np.float32)).astype(np.float32)
    elif case_name == "case2_i8_6x7x8":
        lhs = np.random.randint(-10, 10, size=(M, K)).astype(np.int8)
        rhs = np.random.randint(-10, 10, size=(K, N)).astype(np.int8)
        golden = np.matmul(lhs.astype(np.int32), rhs.astype(np.int32)).astype(np.int32)
    elif case_name == "case4_f32_120x110x50":
        lhs = np.random.uniform(-1.0, 1.0, size=(M, K)).astype(np.float32)
        rhs = np.random.uniform(-1.0, 1.0, size=(K, N)).astype(np.float32)
        golden = np.matmul(lhs, rhs).astype(np.float32)
    elif case_name == "case5_bf16_144x80x48":
        lhs = np.random.uniform(-1.0, 1.0, size=(M, K)).astype(bfloat16)
        rhs = np.random.uniform(-1.0, 1.0, size=(K, N)).astype(bfloat16)
        golden = np.matmul(lhs.astype(np.float32), rhs.astype(np.float32)).astype(np.float32)
        lhs = lhs.view(np.uint16)
        rhs = rhs.view(np.uint16)
    elif case_name == "case12_tf32_16x32x64":
        lhs_f32 = np.random.uniform(-1.0, 1.0, size=(M, K)).astype(np.float32)
        rhs_f32 = np.random.uniform(-1.0, 1.0, size=(K, N)).astype(np.float32)
        tf32_func = np.vectorize(lambda x: float32_to_tf32(x, "CAST_RINT"), otypes=[np.float32])
        lhs = tf32_func(lhs_f32)
        rhs = tf32_func(rhs_f32)
        golden = np.matmul(lhs, rhs).astype(np.float32)
    elif case_name == "case13_tf32_128x96x64":
        lhs_f32 = np.random.uniform(-1.0, 1.0, size=(M, K)).astype(np.float32)
        rhs_f32 = np.random.uniform(-1.0, 1.0, size=(K, N)).astype(np.float32)
        tf32_func = np.vectorize(lambda x: float32_to_tf32(x, "CAST_ROUND"), otypes=[np.float32])
        lhs = tf32_func(lhs_f32)
        rhs = tf32_func(rhs_f32)
        golden = np.matmul(lhs, rhs).astype(np.float32)
    else:
        continue

    lhs.tofile(os.path.join(case_name, "input1.bin"))
    rhs.tofile(os.path.join(case_name, "input2.bin"))
    golden.tofile(os.path.join(case_name, "golden.bin"))
    print(f"[INFO] gen_data: {case_name} lhs={(M,K)} rhs={(K,N)} out={(M,N)} dtype={dtype_a.__name__}")