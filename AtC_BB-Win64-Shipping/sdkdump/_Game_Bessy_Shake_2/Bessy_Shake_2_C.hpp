#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShake.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Bessy_Shake_2 {
#pragma pack(push, 1)
struct Bessy_Shake_2_C : public _Script_Engine::CameraShake {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
