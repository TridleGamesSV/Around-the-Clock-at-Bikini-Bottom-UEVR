#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshSamplingRegion {
    void* get_Name();
    int32_t& get_LODIndex();
    bool get_bSupportUniformlyDistributedSampling();
    void set_bSupportUniformlyDistributedSampling(bool value);
    void* get_MaterialFilters();
    void* get_BoneFilters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
