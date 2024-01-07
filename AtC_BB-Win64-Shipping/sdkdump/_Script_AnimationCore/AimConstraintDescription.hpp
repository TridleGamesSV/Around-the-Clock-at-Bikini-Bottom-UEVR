#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ConstraintDescriptionEx.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct AimConstraintDescription : public ConstraintDescriptionEx {
    void* get_LookAt_Axis();
    void* get_LookUp_Axis();
    bool get_bUseLookUp();
    void set_bUseLookUp(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
