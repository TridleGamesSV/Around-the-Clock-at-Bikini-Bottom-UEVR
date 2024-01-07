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
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Blueprints_Atomic_Flounder_Knockout_1_BP {
#pragma pack(push, 1)
struct Atomic_Flounder_Knockout_1_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Bubble();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    _Script_Engine::Actor*& get_Actor_To_Move();
    float& get_Speed();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Atomic_Flounder_Knockout_1_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
