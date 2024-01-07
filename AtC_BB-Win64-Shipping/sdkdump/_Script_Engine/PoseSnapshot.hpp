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
struct PoseSnapshot {
    void* get_LocalTransforms();
    void* get_BoneNames();
    void* get_SkeletalMeshName();
    void* get_SnapshotName();
    bool get_bIsValid();
    void set_bIsValid(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
