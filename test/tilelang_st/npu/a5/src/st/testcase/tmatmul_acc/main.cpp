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

extern void LaunchTMATMUL_case3_f16_127x128x61_splitk(uint16_t *a, uint16_t *b, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_5_f32_127x128x63_splitk(float *a, float *b, float *bias, float *c, void *stream);
extern void LaunchTMATMUL_BIAS_case_bias_11_f16_1x512x85_gemv_splitk(uint16_t *a, uint16_t *b, float *bias, float *c, void *stream);

static const char* ALL_CASES[] = {
    "tmatmul/case3_f16_127x128x61_splitk",
    "tmatmul_bias/case_bias_5_f32_127x128x63_splitk",
    "tmatmul_bias/case_bias_11_f16_1x512x85_gemv_splitk",
};

static int runCase(const char *caseName, aclrtStream stream) {
    std::string caseDir = std::string("./") + caseName;
    std::printf("[INFO] Running case: %s\n", caseName);
    int rc = 0;

    if (std::strcmp(caseName, "tmatmul/case3_f16_127x128x61_splitk") == 0) {
        const size_t aBytes = 127 * 128 * sizeof(uint16_t);
        const size_t bBytes = 128 * 61 * sizeof(uint16_t);
        const size_t cBytes = 127 * 61 * sizeof(float);
        size_t aFileSize = aBytes, bFileSize = bBytes;
        void *aHost = nullptr, *bHost = nullptr, *cHost = nullptr;
        void *aDev = nullptr, *bDev = nullptr, *cDev = nullptr;
        aclrtMallocHost(&aHost, aBytes);
        aclrtMallocHost(&bHost, bBytes);
        aclrtMallocHost(&cHost, cBytes);
        aclrtMalloc(&aDev, aBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&bDev, bBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        aclrtMalloc(&cDev, cBytes, ACL_MEM_MALLOC_HUGE_FIRST);
        if (!ReadFile(caseDir + "/input1.bin", aFileSize, aHost, aBytes) ||
            !ReadFile(caseDir + "/input2.bin", bFileSize, bHost, bBytes)) {
            rc = 1;
        } else {
            aclrtMemcpy(aDev, aBytes, aHost, aBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            aclrtMemcpy(bDev, bBytes, bHost, bBytes, ACL_MEMCPY_HOST_TO_DEVICE);
            LaunchTMATMUL_case3_f16_127x128x61_splitk((uint16_t*)aDev, (uint16_t*)bDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "tmatmul_bias/case_bias_5_f32_127x128x63_splitk") == 0) {
        const size_t aBytes = 127 * 128 * sizeof(float);
        const size_t bBytes = 128 * 63 * sizeof(float);
        const size_t biasBytes = 63 * sizeof(float);
        const size_t cBytes = 127 * 63 * sizeof(float);
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
            LaunchTMATMUL_BIAS_case_bias_5_f32_127x128x63_splitk((float*)aDev, (float*)bDev, (float*)biasDev, (float*)cDev, stream);
            aclrtSynchronizeStream(stream);
            aclrtMemcpy(cHost, cBytes, cDev, cBytes, ACL_MEMCPY_DEVICE_TO_HOST);
            WriteFile(caseDir + "/output.bin", cHost, cBytes);
        }
        aclrtFree(aDev); aclrtFree(bDev); aclrtFree(biasDev); aclrtFree(cDev);
        aclrtFreeHost(aHost); aclrtFreeHost(bHost); aclrtFreeHost(biasHost); aclrtFreeHost(cHost);
    }
    else if (std::strcmp(caseName, "tmatmul_bias/case_bias_11_f16_1x512x85_gemv_splitk") == 0) {
        const size_t aBytes = 1 * 512 * sizeof(uint16_t);
        const size_t bBytes = 512 * 85 * sizeof(uint16_t);
        const size_t biasBytes = 85 * sizeof(float);
        const size_t cBytes = 1 * 85 * sizeof(float);
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
            LaunchTMATMUL_BIAS_case_bias_11_f16_1x512x85_gemv_splitk((uint16_t*)aDev, (uint16_t*)bDev, (float*)biasDev, (float*)cDev, stream);
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