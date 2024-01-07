#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ArchVisCharacter {
#pragma pack(push, 1)
struct ArchVisCharacter : public _Script_Engine::Character {
    void* get_LookUpAxisName();
    void* get_LookUpAtRateAxisName();
    void* get_TurnAxisName();
    void* get_TurnAtRateAxisName();
    void* get_MoveForwardAxisName();
    void* get_MoveRightAxisName();
    float& get_MouseSensitivityScale_Pitch();
    float& get_MouseSensitivityScale_Yaw();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
