#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct PoseDriverTarget {
    void* get_BoneTransforms();
    void* get_TargetRotation();
    float& get_TargetScale();
    bool get_bApplyCustomCurve();
    void set_bApplyCustomCurve(bool value);
    void* get_CustomCurve();
    void* get_DrivenName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
