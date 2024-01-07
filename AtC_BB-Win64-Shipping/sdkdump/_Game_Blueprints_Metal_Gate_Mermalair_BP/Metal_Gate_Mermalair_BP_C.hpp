#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Metal_Gate_Mermalair_BP {
#pragma pack(push, 1)
struct Metal_Gate_Mermalair_BP_C : public _Script_Engine::StaticMeshActor {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
