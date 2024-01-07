#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AmbientSound.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Iron_Dogfish_Fight_BP {
#pragma pack(push, 1)
struct Iron_Dogfish_Fight_BP_C : public _Script_Engine::AmbientSound {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
