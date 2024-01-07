#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Spongebob_Back_Door_Closed {
#pragma pack(push, 1)
struct Spongebob_Back_Door_Closed_C : public _Script_Engine::StaticMeshActor {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
