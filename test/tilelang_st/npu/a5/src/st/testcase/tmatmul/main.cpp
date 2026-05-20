// Copyright (c) 2026 Huawei Technologies Co., Ltd.
// This program is free software, you can redistribute it and/or modify it under the terms and conditions of
// CANN Open Software License Agreement Version 2.0 (the "License").
// Please refer to the License for details. You can not use this file except in compliance with the License.
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

using namespace PtoTestCommon;

void LaunchCase1_f16_40x50x60(uint16_t *a, uint16_t *b, float *c, void *stream);
void LaunchCase2_i8_6x7x8(int8_t *a, int8_t *b, int32_t *c, void *stream);
void LaunchCase4_f32_120x110x50(float *a, float *b, float *c, void *stream);
void LaunchCase5_bf16_144x80x48(uint16_t *a, uint16_t *b, float *c, void *stream);
void LaunchCase12_tf32_16x32x64(float *a, float *b, float *c, void *stream);
void LaunchCase13_tf32_128x96x64(float *a, float *b, float *c, void *stream);

enum DtypeKind { DK_F16_BF16 = 0, DK_I8_I32 = 1, DK_F32_F32 = 2 };

struct TestCase {
    const char *name;
    size_t M, K, N;
    size_t dtype_a_size, dtype_b_size, dtype_c_size;
    DtypeKind kind;
    void *launch_fn;
};

static const TestCase kCases[] = {
    {"case1_f16_40x50x60", 40, 50, 60, 2, 2, 4, DK_F16_BF16, (void*)LaunchCase1_f16_40x50x60},
    {"case2_i8_6x7x8", 6, 7, 8, 1, 1, 4, DK_I8_I32, (void*)LaunchCase2_i8_6x7x8},
    {"case4_f32_120x110x50", 120, 110, 50, 4, 4, 4, DK_F32_F32, (void*)LaunchCase4_f32_120x110x50},
    {"case5_bf16_144x80x48", 144, 80, 48, 2, 2, 4, DK_F16_BF16, (void*)LaunchCase5_bf16_144x80x48},
    {"case12_tf32_16x32x64", 16, 32, 64, 4, 4, 4, DK_F32_F32, (void*)LaunchCase12_tf32_16x32x64},
    {"case13_tf32_128x96x64", 128, 96, 64, 4, 4, 4, DK_F32_F32, (void*)LaunchCase13_tf32_128x96x64},
};
static constexpr size_t kNumCases = sizeof(kCases) / sizeof(kCases[0]);

static int RunCase(const TestCase &tc, int deviceId, aclrtStream stream) {
    (void)deviceId;
    int rc = 0;
    const size_t lhsBytes = tc.M * tc.K * tc.dtype_a_size;
    const size_t rhsBytes = tc.K * tc.N * tc.dtype_b_size;
    const size_t outBytes = tc.M * tc.N * tc.dtype_c_size;

    std::printf("[INFO] === case: %s (M=%zu, K=%zu, N=%zu) ===\n", tc.name, tc.M, tc.K, tc.N);
    std::string caseDir = std::string("./") + tc.name;

    void *lhsHost = nullptr, *rhsHost = nullptr, *outHost = nullptr;
    void *lhsDev = nullptr, *rhsDev = nullptr, *outDev = nullptr;

    aclrtMallocHost(&lhsHost, lhsBytes);
    aclrtMallocHost(&rhsHost, rhsBytes);
    aclrtMallocHost(&outHost, outBytes);
    aclrtMalloc(&lhsDev, lhsBytes, ACL_MEM_MALLOC_HUGE_FIRST);
    aclrtMalloc(&rhsDev, rhsBytes, ACL_MEM_MALLOC_HUGE_FIRST);
    aclrtMalloc(&outDev, outBytes, ACL_MEM_MALLOC_HUGE_FIRST);

    if (!ReadFile((caseDir + "/input1.bin").c_str(), lhsBytes, lhsHost, lhsBytes)) {
        std::fprintf(stderr, "[ERROR] failed to read %s/input1.bin\n", caseDir.c_str());
        rc = 1;
    }
    if (rc == 0 && !ReadFile((caseDir + "/input2.bin").c_str(), rhsBytes, rhsHost, rhsBytes)) {
        std::fprintf(stderr, "[ERROR] failed to read %s/input2.bin\n", caseDir.c_str());
        rc = 1;
    }

    if (rc == 0) {
        aclrtMemcpy(lhsDev, lhsBytes, lhsHost, lhsBytes, ACL_MEMCPY_HOST_TO_DEVICE);
        aclrtMemcpy(rhsDev, rhsBytes, rhsHost, rhsBytes, ACL_MEMCPY_HOST_TO_DEVICE);

        if (tc.kind == DK_F16_BF16) {
            auto fn = (void(*)(uint16_t*, uint16_t*, float*, void*))tc.launch_fn;
            fn((uint16_t*)lhsDev, (uint16_t*)rhsDev, (float*)outDev, stream);
        } else if (tc.kind == DK_I8_I32) {
            auto fn = (void(*)(int8_t*, int8_t*, int32_t*, void*))tc.launch_fn;
            fn((int8_t*)lhsDev, (int8_t*)rhsDev, (int32_t*)outDev, stream);
        } else if (tc.kind == DK_F32_F32) {
            auto fn = (void(*)(float*, float*, float*, void*))tc.launch_fn;
            fn((float*)lhsDev, (float*)rhsDev, (float*)outDev, stream);
        }

        aclrtSynchronizeStream(stream);
        aclrtMemcpy(outHost, outBytes, outDev, outBytes, ACL_MEMCPY_DEVICE_TO_HOST);
    }

    if (rc == 0 && !WriteFile((caseDir + "/output.bin").c_str(), outHost, outBytes)) {
        std::fprintf(stderr, "[ERROR] failed to write %s/output.bin\n", caseDir.c_str());
        rc = 1;
    }

    aclrtFree(lhsDev); aclrtFree(rhsDev); aclrtFree(outDev);
    aclrtFreeHost(lhsHost); aclrtFreeHost(rhsHost); aclrtFreeHost(outHost);

    if (rc == 0) std::printf("[INFO] case %s done\n", tc.name);
    return rc;
}

int main(int argc, char *argv[]) {
    const char *caseFilter = (argc > 1) ? argv[1] : nullptr;
    int rc = 0, deviceId = 0;
    aclrtStream stream = nullptr;

    aclInit(nullptr);
    if (const char *envDevice = std::getenv("ACL_DEVICE_ID")) deviceId = std::atoi(envDevice);
    aclrtSetDevice(deviceId);
    aclrtCreateStream(&stream);

    for (size_t i = 0; i < kNumCases; ++i) {
        if (caseFilter != nullptr && std::strcmp(kCases[i].name, caseFilter) != 0) continue;
        if (RunCase(kCases[i], deviceId, stream) != 0) { rc = 1; break; }
    }

    if (stream) aclrtDestroyStream(stream);
    aclrtResetDevice(deviceId);
    aclFinalize();
    return rc;
}