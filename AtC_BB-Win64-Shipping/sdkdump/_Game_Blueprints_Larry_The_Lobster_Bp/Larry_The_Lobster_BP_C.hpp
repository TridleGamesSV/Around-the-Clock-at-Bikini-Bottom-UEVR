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
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
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
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Larry_The_Lobster_Bp {
#pragma pack(push, 1)
struct Larry_The_Lobster_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Chase_Music();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_3AD844D84E15D5BB9507C6B87DE5A2CA(void* MovementResult);
    void OnSuccess_3AD844D84E15D5BB9507C6B87DE5A2CA(void* MovementResult);
    void OnFail_969D2F0C478179809D60AF845D985A53(void* MovementResult);
    void OnSuccess_969D2F0C478179809D60AF845D985A53(void* MovementResult);
    void OnFail_D3A0B42943FF46F755DF68A3C929464B(void* MovementResult);
    void OnSuccess_D3A0B42943FF46F755DF68A3C929464B(void* MovementResult);
    void OnFail_D948246A44AA22FB8EB440B40D72B4C0(void* MovementResult);
    void OnSuccess_D948246A44AA22FB8EB440B40D72B4C0(void* MovementResult);
    void OnFail_2690BA26455CB309DF6869B788ADC719(void* MovementResult);
    void OnSuccess_2690BA26455CB309DF6869B788ADC719(void* MovementResult);
    void OnFail_4B8096454089404AFD0E6CABEE174695(void* MovementResult);
    void OnSuccess_4B8096454089404AFD0E6CABEE174695(void* MovementResult);
    void OnFail_0A06B17B4B69A3A7F2A0928EDF3CCF18(void* MovementResult);
    void OnSuccess_0A06B17B4B69A3A7F2A0928EDF3CCF18(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Larry_The_Lobster_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
