#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FloatingPawnMovement.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpectatorPawnMovement : public FloatingPawnMovement {
    bool get_bIgnoreTimeDilation();
    void set_bIgnoreTimeDilation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
