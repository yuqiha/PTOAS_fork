# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software, you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You may not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.

# coding=utf-8

"""Single source of truth for tmatmul, tmatmul_acc, and tmatmul_bias ST test cases."""

import numpy as np
import ml_dtypes

bfloat16 = ml_dtypes.bfloat16
fp8_e4m3fn = ml_dtypes.float8_e4m3fn
fp8_e5m2 = ml_dtypes.float8_e5m2

# TMATMUL cases (case1-13 from pto-isa)
TMATMUL_CASES = [
    {"name": "case1_f16_40x50x60", "dtype": np.float16, "shape_a": (40, 50), "shape_b": (50, 60), "shape_c": (40, 60), "eps": 1e-2},
    {"name": "case2_i8_6x7x8", "dtype": np.int8, "dtype_c": np.int32, "shape_a": (6, 7), "shape_b": (7, 8), "shape_c": (6, 8), "eps": 0},
    {"name": "case3_f16_127x128x61_splitk", "dtype": np.float16, "shape_a": (127, 128), "shape_b": (128, 61), "shape_c": (127, 61), "eps": 1e-2, "is_splitk": True},
    {"name": "case4_f32_120x110x50", "dtype": np.float32, "shape_a": (120, 110), "shape_b": (110, 50), "shape_c": (120, 50), "eps": 1e-3},
    {"name": "case5_bf16_144x80x48", "dtype": bfloat16, "shape_a": (144, 80), "shape_b": (80, 48), "shape_c": (144, 48), "eps": 1e-2},
    {"name": "case6_fp8e4m3_32x64x96", "dtype": fp8_e4m3fn, "shape_a": (32, 64), "shape_b": (64, 96), "shape_c": (32, 96), "eps": 1e-2},
    {"name": "case7_fp8e4m3e5m2_128x96x64", "dtype_a": fp8_e4m3fn, "dtype_b": fp8_e5m2, "shape_a": (128, 96), "shape_b": (96, 64), "shape_c": (128, 64), "eps": 1e-2},
    {"name": "case8_fp8e5m2e4m3_145x115x85", "dtype_a": fp8_e5m2, "dtype_b": fp8_e4m3fn, "shape_a": (145, 115), "shape_b": (115, 85), "shape_c": (145, 85), "eps": 1e-2},
    {"name": "case9_fp8e5m2_120x90x160", "dtype": fp8_e5m2, "shape_a": (120, 90), "shape_b": (90, 160), "shape_c": (120, 160), "eps": 1e-2},
    {"name": "case10_hf8_30x90x60", "dtype": np.uint8, "is_hifloat8": True, "shape_a": (30, 90), "shape_b": (90, 60), "shape_c": (30, 60), "eps": 1e-2},
    {"name": "case11_f16_1x300x60_gemv", "dtype": np.float16, "shape_a": (1, 300), "shape_b": (300, 60), "shape_c": (1, 60), "eps": 1e-2, "is_gemv": True},
    {"name": "case12_f32_tf32_rint_16x32x64", "dtype": np.float32, "shape_a": (16, 32), "shape_b": (32, 64), "shape_c": (16, 64), "eps": 1e-3, "is_tf32": True, "tf32_mode": "rint"},
    {"name": "case13_f32_tf32_round_128x96x64", "dtype": np.float32, "shape_a": (128, 96), "shape_b": (96, 64), "shape_c": (128, 64), "eps": 1e-3, "is_tf32": True, "tf32_mode": "round"},
]

# TMATMUL_ACC cases (for Split-K pattern, reuse TMATMUL_CASES with is_splitk)
TMATMUL_ACC_CASES = []

# TMATMUL_BIAS cases (case_bias_1-11 from pto-isa)
TMATMUL_BIAS_CASES = [
    {"name": "case_bias_1_i8_8x7x6", "dtype": np.int8, "dtype_c": np.int32, "shape_a": (8, 7), "shape_b": (7, 6), "shape_bias": (1, 6), "shape_c": (8, 6), "eps": 0},
    {"name": "case_bias_2_f16_16x15x16", "dtype": np.float16, "dtype_bias": np.float16, "shape_a": (16, 15), "shape_b": (15, 16), "shape_bias": (1, 16), "shape_c": (16, 16), "eps": 1e-2},
    {"name": "case_bias_3_f16bf16_112x127x80", "dtype": np.float16, "dtype_bias": bfloat16, "shape_a": (112, 127), "shape_b": (127, 80), "shape_bias": (1, 80), "shape_c": (112, 80), "eps": 1e-2},
    {"name": "case_bias_4_bf16_80x112x63", "dtype": bfloat16, "dtype_bias": bfloat16, "shape_a": (80, 112), "shape_b": (112, 63), "shape_bias": (1, 63), "shape_c": (80, 63), "eps": 1e-2},
    {"name": "case_bias_5_f32_127x128x63_splitk", "dtype": np.float32, "shape_a": (127, 128), "shape_b": (128, 63), "shape_bias": (1, 63), "shape_c": (127, 63), "eps": 1e-3, "is_splitk": True},
    {"name": "case_bias_6_fp8e4m3_120x90x160", "dtype": fp8_e4m3fn, "shape_a": (120, 90), "shape_b": (90, 160), "shape_bias": (1, 160), "shape_c": (120, 160), "eps": 1e-2},
    {"name": "case_bias_7_fp8e4m3e5m2_32x64x96", "dtype_a": fp8_e4m3fn, "dtype_b": fp8_e5m2, "shape_a": (32, 64), "shape_b": (64, 96), "shape_bias": (1, 96), "shape_c": (32, 96), "eps": 1e-2},
    {"name": "case_bias_8_fp8e5m2e4m3_128x96x64", "dtype_a": fp8_e5m2, "dtype_b": fp8_e4m3fn, "shape_a": (128, 96), "shape_b": (96, 64), "shape_bias": (1, 64), "shape_c": (128, 64), "eps": 1e-2},
    {"name": "case_bias_9_fp8e5m2_30x90x60", "dtype": fp8_e5m2, "shape_a": (30, 90), "shape_b": (90, 60), "shape_bias": (1, 60), "shape_c": (30, 60), "eps": 1e-2},
    {"name": "case_bias_10_hf8_145x115x85", "dtype": np.uint8, "is_hifloat8": True, "shape_a": (145, 115), "shape_b": (115, 85), "shape_bias": (1, 85), "shape_c": (145, 85), "eps": 1e-2},
    {"name": "case_bias_11_f16_1x512x85_gemv_splitk", "dtype": np.float16, "shape_a": (1, 512), "shape_b": (512, 85), "shape_bias": (1, 85), "shape_c": (1, 85), "eps": 1e-2, "is_gemv": True, "is_splitk": True},
]