// Copyright (c) 2026 Huawei Technologies Co., Ltd.
// This program is free software; you can redistribute it and/or modify it under the terms and conditions of
// CANN Open Software License Agreement Version 2.0 (the "License").
// Please refer to the License for details. You may not use this file except in compliance with the License.
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
// See LICENSE in the root of the software repository for the full text of the License.

#include <stdint.h>

#ifndef AICORE
#define AICORE [aicore]
#endif

// ========== TMATMUL splitk kernel declarations ==========

extern "C" __global__ AICORE void TMATMUL_case3_f16_127x128x61_splitk(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ float *c);

// ========== TMATMUL_BIAS splitk kernel declarations ==========

extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_5_f32_127x128x63_splitk(__gm__ float *a, __gm__ float *b, __gm__ float *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_11_f16_1x512x85_gemv_splitk(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ float *bias, __gm__ float *c);

// ========== TMATMUL splitk launch functions ==========

void LaunchTMATMUL_case3_f16_127x128x61_splitk(uint16_t *a, uint16_t *b, float *c, void *stream) {
    TMATMUL_case3_f16_127x128x61_splitk<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ float *)c);
}

// ========== TMATMUL_BIAS splitk launch functions ==========

void LaunchTMATMUL_BIAS_case_bias_5_f32_127x128x63_splitk(float *a, float *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_5_f32_127x128x63_splitk<<<1, nullptr, stream>>>((__gm__ float *)a, (__gm__ float *)b, (__gm__ float *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_11_f16_1x512x85_gemv_splitk(uint16_t *a, uint16_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_11_f16_1x512x85_gemv_splitk<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}