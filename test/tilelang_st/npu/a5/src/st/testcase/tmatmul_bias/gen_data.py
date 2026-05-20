# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software; you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You may not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.

# coding=utf-8

import os
import struct
import math
import numpy as np
import ml_dtypes

bfloat16 = ml_dtypes.bfloat16
fp8_e4m3fn = ml_dtypes.float8_e4m3fn
fp8_e5m2 = ml_dtypes.float8_e5m2

np.random.seed(19)


def check(x, n):
    if len(x) < n:
        x = '0' * (n - len(x)) + x
    elif len(x) > n:
        x = x[1:]
    return x


def HF8(input):
    if len(input) < 8:
        return np.nan
    if len(input) > 8:
        return np.nan
    d = ''
    e = ''
    s = input[0]
    m = input[5:]
    m1 = int(input[5])
    m2 = int(input[6])
    m3 = int(input[7])
    if input[1] == '1' or input[2] == '1':
        d = input[1:3]
        e = input[3:5]
    elif input[3] == '1':
        d = input[1:4]
        e = input[4]
    else:
        d = input[1:5]
        e = ''
    f1 = 1
    f2 = 1
    if d == '0000':
        if s == '1':
            f1 = -1
            if m == '000':
                return np.nan
            input = 2 ** (m1 * 4 + m2 * 2 + m3 - 23) * f1
        else:
            if m == '000':
                return 0
            input = 2 ** (m1 * 4 + m2 * 2 + m3 - 23)
        return input
    elif d == '0001':
        if s == '1':
            f1 = -1
        f2 = 0
        input = (1 + (m1 * 4 + m2 * 2 + m3) / 8) * 2 ** f2 * f1
        return input
    elif d == '001':
        if s == '1':
            f1 = -1
        if e == '1':
            f2 = -1
        input = (1 + (m1 * 4 + m2 * 2 + m3) / 8) * 2 ** f2 * f1
        return input
    elif d == '01':
        if s == '1':
            f1 = -1
        e1 = int(input[3])
        e2 = int(input[4])
        if e1 == 1:
            f2 = -1
        input = (1 + (m1 * 4 + m2 * 2 + m3) / 8) * 2 ** (f2 * (2 + e2)) * f1
        return input
    elif d == '10':
        if s == '1':
            f1 = -1
        e1 = int(input[3])
        e2 = int(input[4])
        e3 = int(input[5])
        if e1 == 1:
            f2 = -1
        input = (1 + (m2 * 2 + m3) / 4) * 2 ** (f2 * (4 + e2 * 2 + e3)) * f1
        return input
    elif d == '11':
        if s == '1':
            f1 = -1
        e1 = int(input[3])
        e2 = int(input[4])
        e3 = int(input[5])
        e4 = int(input[6])
        if e1 == 1:
            f2 = -1
        if e == '01' and m == '111':
            return f1 * np.inf
        input = (1 + m3 / 2) * 2 ** (f2 * (8 + e2 * 4 + e3 * 2 + e4)) * f1
        return input


def convert_hifloat8(data):
    s = data.reshape(-1)
    result = np.zeros(len(s), dtype=np.float32)
    for i in range(len(s)):
        temp = bin(s[i])
        temp = temp.split('b')[1]
        temp = check(temp, 8)
        result[i] = HF8(temp)
    return result.reshape(data.shape)


def gen_tmatmul_bias_data(case_dir, case):
    shape_a = case["shape_a"]
    shape_b = case["shape_b"]
    shape_bias = case["shape_bias"]
    dtype = case.get("dtype", np.float16)
    dtype_a = case.get("dtype_a", dtype)
    dtype_b = case.get("dtype_b", dtype)
    dtype_bias = case.get("dtype_bias", np.float32)
    dtype_c = case.get("dtype_c", np.float32)
    is_hifloat8 = case.get("is_hifloat8", False)
    
    if dtype_a == np.int8:
        x1_gm = np.random.randint(-10, 10, shape_a).astype(np.int8)
        x2_gm = np.random.randint(-10, 10, shape_b).astype(np.int8)
        bias_gm = np.random.randint(1, 10, shape_bias).astype(np.int32)
    else:
        x1_gm = np.random.uniform(-1.0, 1.0, shape_a).astype(dtype_a)
        x2_gm = np.random.uniform(-1.0, 1.0, shape_b).astype(dtype_b)
        bias_gm = np.random.uniform(-1.0, 1.0, shape_bias).astype(dtype_bias)
    
    x1_gm.tofile(os.path.join(case_dir, "input1.bin"))
    x2_gm.tofile(os.path.join(case_dir, "input2.bin"))
    bias_gm.tofile(os.path.join(case_dir, "input3.bin"))
    
    if is_hifloat8:
        x1_gm_f32 = convert_hifloat8(x1_gm)
        x2_gm_f32 = convert_hifloat8(x2_gm)
    else:
        x1_gm_f32 = x1_gm.astype(np.float32)
        x2_gm_f32 = x2_gm.astype(np.float32)
    
    matmul_result = np.matmul(x1_gm_f32, x2_gm_f32)
    golden = matmul_result.astype(dtype_c) + bias_gm.astype(dtype_c)
    golden.tofile(os.path.join(case_dir, "golden.bin"))
    print(f"[INFO] gen_data: {case['name']} a={shape_a} b={shape_b} bias={shape_bias} dtype={dtype_a.__name__}")


if __name__ == "__main__":
    from cases import TMATMUL_BIAS_CASES
    
    BIAS_CASES_NO_SPLITK = [c for c in TMATMUL_BIAS_CASES if not c.get("is_splitk", False)]
    
    for case in BIAS_CASES_NO_SPLITK:
        case_dir = case['name']
        os.makedirs(case_dir, exist_ok=True)
        gen_tmatmul_bias_data(case_dir, case)