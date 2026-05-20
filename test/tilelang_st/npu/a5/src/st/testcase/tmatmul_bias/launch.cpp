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

// ========== TMATMUL_BIAS kernel declarations (case_bias_1,2,3,4,6,7,8,9,10 - no splitk) ==========

extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_1_i8_8x7x6(__gm__ int8_t *a, __gm__ int8_t *b, __gm__ int32_t *bias, __gm__ int32_t *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_2_f16_16x15x16(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ uint16_t *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_3_f16bf16_112x127x80(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ uint16_t *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_4_bf16_80x112x63(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ uint16_t *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_6_fp8e4m3_120x90x160(__gm__ uint8_t *a, __gm__ uint8_t *b, __gm__ float *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_7_fp8e4m3e5m2_32x64x96(__gm__ uint8_t *a, __gm__ uint8_t *b, __gm__ float *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_8_fp8e5m2e4m3_128x96x64(__gm__ uint8_t *a, __gm__ uint8_t *b, __gm__ float *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_9_fp8e5m2_30x90x60(__gm__ uint8_t *a, __gm__ uint8_t *b, __gm__ float *bias, __gm__ float *c);
extern "C" __global__ AICORE void TMATMUL_BIAS_case_bias_10_hf8_145x115x85(__gm__ uint8_t *a, __gm__ uint8_t *b, __gm__ float *bias, __gm__ float *c);

// ========== TMATMUL_BIAS launch functions ==========

void LaunchTMATMUL_BIAS_case_bias_1_i8_8x7x6(int8_t *a, int8_t *b, int32_t *bias, int32_t *c, void *stream) {
    TMATMUL_BIAS_case_bias_1_i8_8x7x6<<<1, nullptr, stream>>>((__gm__ int8_t *)a, (__gm__ int8_t *)b, (__gm__ int32_t *)bias, (__gm__ int32_t *)c);
}

void LaunchTMATMUL_BIAS_case_bias_2_f16_16x15x16(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_2_f16_16x15x16<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ uint16_t *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_3_f16bf16_112x127x80(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_3_f16bf16_112x127x80<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ uint16_t *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_4_bf16_80x112x63(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_4_bf16_80x112x63<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ uint16_t *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_6_fp8e4m3_120x90x160(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_6_fp8e4m3_120x90x160<<<1, nullptr, stream>>>((__gm__ uint8_t *)a, (__gm__ uint8_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_7_fp8e4m3e5m2_32x64x96(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_7_fp8e4m3e5m2_32x64x96<<<1, nullptr, stream>>>((__gm__ uint8_t *)a, (__gm__ uint8_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_8_fp8e5m2e4m3_128x96x64(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_8_fp8e5m2e4m3_128x96x64<<<1, nullptr, stream>>>((__gm__ uint8_t *)a, (__gm__ uint8_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_9_fp8e5m2_30x90x60(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_9_fp8e5m2_30x90x60<<<1, nullptr, stream>>>((__gm__ uint8_t *)a, (__gm__ uint8_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}

void LaunchTMATMUL_BIAS_case_bias_10_hf8_145x115x85(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream) {
    TMATMUL_BIAS_case_bias_10_hf8_145x115x85<<<1, nullptr, stream>>>((__gm__ uint8_t *)a, (__gm__ uint8_t *)b, (__gm__ float *)bias, (__gm__ float *)c);
}