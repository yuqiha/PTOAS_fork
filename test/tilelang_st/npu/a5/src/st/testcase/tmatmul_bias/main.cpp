// Copyright (c) 2026 Huawei Technologies Co., Ltd.
// This program is free software; you can redistribute it and/or modify it under the terms and conditions of
// CANN Open Software License Agreement Version 2.0 (the "License").
// Please refer to the License for details. You may not use this file except in compliance with the License.
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE.
// See LICENSE in the root of the software repository for the full text of the License.

#include "acl/acl.h"
#include "test_common.h"
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

using namespace PtoTestCommon;

extern void LaunchTMATMUL_BIAS_case_bias_1_i8_8x7x6(int8_t *a, int8_t *b, int32_t *bias, int32_t *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_2_f16_16x15x16(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_3_f16bf16_112x127x80(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_4_bf16_80x112x63(uint16_t *a, uint16_t *b, uint16_t *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_6_fp8e4m3_120x90x160(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_7_fp8e4m3e5m2_32x64x96(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_8_fp8e5m2e4m3_128x96x64(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_9_fp8e5m2_30x90x60(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_10_hf8_145x115x85(uint8_t *a, uint8_t *b, float *bias, float *c, void *stream);

static const char* ALL_CASES[] = {
    "case_bias_1_i8_8x7x6",
    "case_bias_2_f16_16x15x16",
    "case_bias_3_f16bf16_112x127x80",
    "case_bias_4_bf16_80x112x63",
    "case_bias_6_fp8e4m3_120x90x160",
    "case_bias_7_fp8e4m3e5m2_32x64x96",
    "case_bias_8_fp8e5m2e4m3_128x96x64",
    "case_bias_9_fp8e5m2_30x90x60",
    "case_bias_10_hf8_145x115x85",
};

static int runCase(const char *caseName, aclrtStream stream) {
    std::string caseDir = std::string("./") + caseName;
    std::printf("[INFO] Running case: %s\n", caseName);
    int rc = 0;

    if (std::strcmp(caseName, "case_bias_1_i8_8x7x6") == 0) {
        const size_t aBytes = 8 * 7 * sizeof(int8_t);
        const size_t bBytes = 7 * 6 * sizeof(int8_t);
        const size_t biasBytes = 6 * sizeof(int32_t);
        const size_t cBytes = 8 * 6 * sizeof(int32_t);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_1_i8_8x7x6((int8_t*)aDev, (int8_t*)bDev, (int32_t*)biasDev, (int32_t*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_2_f16_16x15x16") == 0) {
        const size_t aBytes = 16 * 15 * sizeof(uint16_t);
        const size_t bBytes = 15 * 16 * sizeof(uint16_t);
        const size_t biasBytes = 16 * sizeof(uint16_t);
        const size_t cBytes = 16 * 16 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_2_f16_16x15x16((uint16_t*)aDev, (uint16_t*)bDev, (uint16_t*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_3_f16bf16_112x127x80") == 0) {
        const size_t aBytes = 112 * 127 * sizeof(uint16_t);
        const size_t bBytes = 127 * 80 * sizeof(uint16_t);
        const size_t biasBytes = 80 * sizeof(uint16_t);
        const size_t cBytes = 112 * 80 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_3_f16bf16_112x127x80((uint16_t*)aDev, (uint16_t*)bDev, (uint16_t*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_4_bf16_80x112x63") == 0) {
        const size_t aBytes = 80 * 112 * sizeof(uint16_t);
        const size_t bBytes = 112 * 63 * sizeof(uint16_t);
        const size_t biasBytes = 63 * sizeof(uint16_t);
        const size_t cBytes = 80 * 63 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_4_bf16_80x112x63((uint16_t*)aDev, (uint16_t*)bDev, (uint16_t*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_6_fp8e4m3_120x90x160") == 0) {
        const size_t aBytes = 120 * 90 * sizeof(uint8_t);
        const size_t bBytes = 90 * 160 * sizeof(uint8_t);
        const size_t biasBytes = 160 * sizeof(float);
        const size_t cBytes = 120 * 160 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_6_fp8e4m3_120x90x160((uint8_t*)aDev, (uint8_t*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_7_fp8e4m3e5m2_32x64x96") == 0) {
        const size_t aBytes = 32 * 64 * sizeof(uint8_t);
        const size_t bBytes = 64 * 96 * sizeof(uint8_t);
        const size_t biasBytes = 96 * sizeof(float);
        const size_t cBytes = 32 * 96 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_7_fp8e4m3e5m2_32x64x96((uint8_t*)aDev, (uint8_t*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_8_fp8e5m2e4m3_128x96x64") == 0) {
        const size_t aBytes = 128 * 96 * sizeof(uint8_t);
        const size_t bBytes = 96 * 64 * sizeof(uint8_t);
        const size_t biasBytes = 64 * sizeof(float);
        const size_t cBytes = 128 * 64 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_8_fp8e5m2e4m3_128x96x64((uint8_t*)aDev, (uint8_t*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_9_fp8e5m2_30x90x60") == 0) {
        const size_t aBytes = 30 * 90 * sizeof(uint8_t);
        const size_t bBytes = 90 * 60 * sizeof(uint8_t);
        const size_t biasBytes = 60 * sizeof(float);
        const size_t cBytes = 30 * 60 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_9_fp8e5m2_30x90x60((uint8_t*)aDev, (uint8_t*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "case_bias_10_hf8_145x115x85") == 0) {
        const size_t aBytes = 145 * 115 * sizeof(uint8_t);
        const size_t bBytes = 115 * 85 * sizeof(uint8_t);
        const size_t biasBytes = 85 * sizeof(float);
        const size_t cBytes = 145 * 85 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes, biasFileSize = biasBytes;
        void *aHost = nullptr, *bHost = nullptr, *biasHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *biasDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&biasHost, biasBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&biasDev, biasBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes) ||
            !ReadFile(caseDir + "/input3.bin", biasFileSize, biasHost, biasBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(biasDev, biasBytes, biasHost, biasBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_BIAS_case_bias_10_hf8_145x115x85((uint8_t*)aDev, (uint8_t*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else {
        std::fprintf(stderr, "[ERROR] Unknown case: %s\n", caseName);
        rc = 1;
    }

    if (rc == 0) std::printf("[INFO] case %s done\n", caseName);
    return rc;
}

int main(int argc, char *argv[]) {
    int deviceId = 0;
    aclrtStream stream = nullptr;

    aclInit(nullptr);
    if (const char *envDevice = std::getenv("ACL_DEVICE_ID")) {
        deviceId = std::atoi(envDevice);
    }
    aclrtSetDevice(deviceId);
    aclrtCreateStream(&stream);

    int totalRc = 0;
    if (argc < 2) {
        for (const char *caseName : ALL_CASES) {
            int rc = runCase(caseName, stream);
            if (rc != 0) totalRc = rc;
        }
    } else {
        totalRc = runCase(argv[1], stream);
    }

    if (stream) aclrtDestroyStream(stream);
    aclrtResetDevice(deviceId);
    aclFinalize();

    std::printf("[INFO] All cases completed with rc=%d\n", totalRc);
    return totalRc;
}