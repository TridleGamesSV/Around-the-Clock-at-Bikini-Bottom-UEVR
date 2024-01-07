#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AmbientSound.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Industrial_Wind_BP {
#pragma pack(push, 1)
struct Industrial_Wind_BP_C : public _Script_Engine::AmbientSound {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
