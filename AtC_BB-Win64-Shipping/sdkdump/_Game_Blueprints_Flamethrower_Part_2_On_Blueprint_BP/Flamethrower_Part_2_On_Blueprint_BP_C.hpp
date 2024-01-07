#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Flamethrower_Part_2_On_Blueprint_BP {
#pragma pack(push, 1)
struct Flamethrower_Part_2_On_Blueprint_BP_C : public _Script_Engine::StaticMeshActor {
    _Script_Engine::StaticMeshComponent*& get_Sticker_2();
    _Script_Engine::StaticMeshComponent*& get_Sticker_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
