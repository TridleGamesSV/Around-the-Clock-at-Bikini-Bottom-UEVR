#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Goofy_Bartender_BP {
#pragma pack(push, 1)
struct Goofy_Bartender_BP_C : public _Script_Engine::Character {
    _Script_Engine::StaticMeshComponent*& get_Bartender();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
