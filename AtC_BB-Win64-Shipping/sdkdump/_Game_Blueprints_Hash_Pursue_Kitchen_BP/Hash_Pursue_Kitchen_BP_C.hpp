#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_Hash_Pursue_Kitchen_BP {
#pragma pack(push, 1)
struct Hash_Pursue_Kitchen_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Spawn();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Hash_Pursue_Kitchen_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
