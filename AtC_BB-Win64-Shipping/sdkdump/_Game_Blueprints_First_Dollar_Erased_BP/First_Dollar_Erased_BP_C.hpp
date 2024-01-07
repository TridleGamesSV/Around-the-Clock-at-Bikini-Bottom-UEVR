#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_First_Dollar_Erased_BP {
#pragma pack(push, 1)
struct First_Dollar_Erased_BP_C : public _Script_Engine::StaticMeshActor {
    _Script_Engine::SaveGame*& get_SaverSubClass();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
