#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Bessy_Boss_Phase_End_Thanos_BP {
#pragma pack(push, 1)
struct Bessy_Boss_Phase_End_Thanos_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    _Script_Engine::Actor*& get_Actor_To_Move();
    float& get_Speed();
    void* get_Gun_Offset();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Bessy_Boss_Phase_End_Thanos_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
