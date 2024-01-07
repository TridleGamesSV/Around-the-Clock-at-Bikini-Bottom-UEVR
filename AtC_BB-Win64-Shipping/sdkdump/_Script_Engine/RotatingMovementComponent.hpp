#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RotatingMovementComponent : public MovementComponent {
    void* get_RotationRate();
    void* get_PivotTranslation();
    bool get_bRotationInLocalSpace();
    void set_bRotationInLocalSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
