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
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_MrKrabs_Stand_9_BP {
#pragma pack(push, 1)
struct MrKrabs_Stand_9_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_MrKrabs();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ExecuteUbergraph_MrKrabs_Stand_9_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
