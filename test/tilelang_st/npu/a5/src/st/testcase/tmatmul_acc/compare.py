# Copyright (c) 2026 Huawei Technologies Co., Ltd.
# This program is free software; you can redistribute it and/or modify it under the terms and conditions of
# CANN Open Software License Agreement Version 2.0 (the "License").
# Please refer to the License for details. You may not use this file except in compliance with the License.
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
# INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
# See LICENSE in the root of the software repository for the full text of the License.

# coding=utf-8

import os
import sys
import numpy as np

from cases import TMATMUL_CASES, TMATMUL_BIAS_CASES
from st_common import result_cmp, style_fail, style_pass


def get_splitk_cases():
    tmatmul_splitk = [c for c in TMATMUL_CASES if c.get("is_splitk", False)]
    tmatmul_bias_splitk = [c for c in TMATMUL_BIAS_CASES if c.get("is_splitk", False)]
    return tmatmul_splitk, tmatmul_bias_splitk


def main():
    case_filter = sys.argv[1] if len(sys.argv) > 1 else None

    all_passed = True

    tmatmul_splitk_cases, tmatmul_bias_splitk_cases = get_splitk_cases()

    # Compare TMATMUL splitk cases
    for case in tmatmul_splitk_cases:
        case_name = f"tmatmul/{case['name']}"
        if case_filter is not None and case_name != case_filter:
            continue

        case_dir = case_name
        shape_c = case["shape_c"]
        dtype_c = case.get("dtype_c", np.float32)
        
        golden = np.fromfile(os.path.join(case_dir, "golden.bin"), dtype=dtype_c).reshape(shape_c)
        output = np.fromfile(os.path.join(case_dir, "output.bin"), dtype=dtype_c).reshape(shape_c)

        ok = result_cmp(golden, output, case["eps"])
        if ok:
            print(style_pass(f"[INFO] {case_name}: compare passed"))
        else:
            print(style_fail(f"[ERROR] {case_name}: compare failed"))
            all_passed = False

    # Compare TMATMUL_BIAS splitk cases
    for case in tmatmul_bias_splitk_cases:
        case_name = f"tmatmul_bias/{case['name']}"
        if case_filter is not None and case_name != case_filter:
            continue

        case_dir = case_name
        shape_c = case["shape_c"]
        dtype_c = case.get("dtype_c", np.float32)
        
        golden = np.fromfile(os.path.join(case_dir, "golden.bin"), dtype=dtype_c).reshape(shape_c)
        output = np.fromfile(os.path.join(case_dir, "output.bin"), dtype=dtype_c).reshape(shape_c)

        ok = result_cmp(golden, output, case["eps"])
        if ok:
            print(style_pass(f"[INFO] {case_name}: compare passed"))
        else:
            print(style_fail(f"[ERROR] {case_name}: compare failed"))
            all_passed = False

    if not all_passed:
        sys.exit(2)
    print(style_pass("[INFO] all cases passed"))


if __name__ == "__main__":
    main()