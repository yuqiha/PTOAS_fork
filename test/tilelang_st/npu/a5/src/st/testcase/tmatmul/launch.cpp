// Copyright (c) 2026 Huawei Technologies Co., Ltd.
// This program is free software, you can redistribute it and/or modify it under the terms and conditions of
// CANN Open Software License Agreement Version 2.0 (the "License").
// Please refer to the License for details. You can not use this file except in compliance with the License.
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
// See LICENSE in the root of the software repository for the full text of the License.

#include <stdint.h>

#ifndef AICORE
#define AICORE [aicore]
#endif

extern "C" __global__ AICORE void case1_f16_40x50x60(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ float *c);
extern "C" __global__ AICORE void case2_i8_6x7x8(__gm__ int8_t *a, __gm__ int8_t *b, __gm__ int32_t *c);
extern "C" __global__ AICORE void case4_f32_120x110x50(__gm__ float *a, __gm__ float *b, __gm__ float *c);
extern "C" __global__ AICORE void case5_bf16_144x80x48(__gm__ uint16_t *a, __gm__ uint16_t *b, __gm__ float *c);
extern "C" __global__ AICORE void case12_tf32_16x32x64(__gm__ float *a, __gm__ float *b, __gm__ float *c);
extern "C" __global__ AICORE void case13_tf32_128x96x64(__gm__ float *a, __gm__ float *b, __gm__ float *c);

void LaunchCase1_f16_40x50x60(uint16_t *a, uint16_t *b, float *c, void *stream) {
    case1_f16_40x50x60<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ float *)c);
}

void LaunchCase2_i8_6x7x8(int8_t *a, int8_t *b, int32_t *c, void *stream) {
    case2_i8_6x7x8<<<1, nullptr, stream>>>((__gm__ int8_t *)a, (__gm__ int8_t *)b, (__gm__ int32_t *)c);
}

void LaunchCase4_f32_120x110x50(float *a, float *b, float *c, void *stream) {
    case4_f32_120x110x50<<<1, nullptr, stream>>>((__gm__ float *)a, (__gm__ float *)b, (__gm__ float *)c);
}

void LaunchCase5_bf16_144x80x48(uint16_t *a, uint16_t *b, float *c, void *stream) {
    case5_bf16_144x80x48<<<1, nullptr, stream>>>((__gm__ uint16_t *)a, (__gm__ uint16_t *)b, (__gm__ float *)c);
}

void LaunchCase12_tf32_16x32x64(float *a, float *b, float *c, void *stream) {
    case12_tf32_16x32x64<<<1, nullptr, stream>>>((__gm__ float *)a, (__gm__ float *)b, (__gm__ float *)c);
}

void LaunchCase13_tf32_128x96x64(float *a, float *b, float *c, void *stream) {
    case13_tf32_128x96x64<<<1, nullptr, stream>>>((__gm__ float *)a, (__gm__ float *)b, (__gm__ float *)c);
}