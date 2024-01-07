#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Jumbo_Shrimp_Idle_BP {
#pragma pack(push, 1)
struct Jumbo_Shrimp_Idle_BP_C : public _Script_Engine::SkeletalMeshActor {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
