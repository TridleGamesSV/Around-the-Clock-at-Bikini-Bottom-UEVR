#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct ConstraintData {
    void* get_Constraint();
    void* get_TargetNode();
    float& get_Weight();
    bool get_bMaintainOffset();
    void set_bMaintainOffset(bool value);
    void* get_Offset();
    void* get_CurrentTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
