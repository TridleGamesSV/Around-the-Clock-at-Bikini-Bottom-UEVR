#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CameraShake.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Death_Shake_4 {
#pragma pack(push, 1)
struct Death_Shake_4_C : public _Script_Engine::CameraShake {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
