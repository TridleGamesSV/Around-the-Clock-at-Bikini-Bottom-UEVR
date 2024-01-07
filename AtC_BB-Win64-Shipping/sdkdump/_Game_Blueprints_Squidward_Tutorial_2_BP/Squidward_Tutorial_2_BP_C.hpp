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
struct Pawn;
}
namespace _Game_Blueprints_Squidward_Tutorial_2_BP {
#pragma pack(push, 1)
struct Squidward_Tutorial_2_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Clarinet();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Arm2();
    _Script_Engine::StaticMeshComponent*& get_Arm1();
    _Script_Engine::StaticMeshComponent*& get_Squidward();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ExecuteUbergraph_Squidward_Tutorial_2_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
