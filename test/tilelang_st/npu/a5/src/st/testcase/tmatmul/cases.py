# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software, you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You can not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.

# coding=utf-8

"""Single source of truth for tmatmul ST test cases."""

import numpy as np
import ml_dtypes

bfloat16 = ml_dtypes.bfloat16

CASES = [
    {"name": "case1_f16_40x50x60", "dtype_a": np.float16, "dtype_b": np.float16, "dtype_c": np.float32, "M": 40, "K": 50, "N": 60, "eps": 1e-2},
    {"name": "case4_f32_120x110x50", "dtype_a": np.float32, "dtype_b": np.float32, "dtype_c": np.float32, "M": 120, "K": 110, "N": 50, "eps": 1e-3},
    {"name": "case5_bf16_144x80x48", "dtype_a": bfloat16, "dtype_b": bfloat16, "dtype_c": np.float32, "M": 144, "K": 80, "N": 48, "eps": 1e-2},
    {"name": "case12_tf32_16x32x64", "dtype_a": np.float32, "dtype_b": np.float32, "dtype_c": np.float32, "M": 16, "K": 32, "N": 64, "eps": 1e-3},
    {"name": "case13_tf32_128x96x64", "dtype_a": np.float32, "dtype_b": np.float32, "dtype_c": np.float32, "M": 128, "K": 96, "N": 64, "eps": 1e-3},
]