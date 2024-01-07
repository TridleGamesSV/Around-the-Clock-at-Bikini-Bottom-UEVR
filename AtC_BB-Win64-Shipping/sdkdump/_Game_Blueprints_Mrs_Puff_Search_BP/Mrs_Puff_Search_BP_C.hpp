#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
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
namespace _Game_Blueprints_Mrs_Puff_Search_BP {
#pragma pack(push, 1)
struct Mrs_Puff_Search_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Blood_3();
    _Script_Engine::ParticleSystemComponent*& get_Blood_2();
    _Script_Engine::AudioComponent*& get_Idle_14();
    _Script_Engine::AudioComponent*& get_Idle_13();
    _Script_Engine::AudioComponent*& get_Idle_12();
    _Script_Engine::AudioComponent*& get_Idle_11();
    _Script_Engine::AudioComponent*& get_Idle_10();
    _Script_Engine::AudioComponent*& get_Idle_9();
    _Script_Engine::AudioComponent*& get_Idle_8();
    _Script_Engine::AudioComponent*& get_Idle_7();
    _Script_Engine::AudioComponent*& get_Idle_6();
    _Script_Engine::AudioComponent*& get_Idle_5();
    _Script_Engine::AudioComponent*& get_Idle_4();
    _Script_Engine::AudioComponent*& get_Idle_3();
    _Script_Engine::AudioComponent*& get_Idle_2();
    _Script_Engine::AudioComponent*& get_Idle_1();
    _Script_Engine::ParticleSystemComponent*& get_Blood_1();
    _Script_Engine::AudioComponent*& get_Chase_Music();
    _Script_Engine::PointLightComponent*& get_AttackLight();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_A90C35074891A7BCFA587888AC5C6798(void* MovementResult);
    void OnSuccess_A90C35074891A7BCFA587888AC5C6798(void* MovementResult);
    void OnFail_150AA6E745C179980A4F61809E53079A(void* MovementResult);
    void OnSuccess_150AA6E745C179980A4F61809E53079A(void* MovementResult);
    void OnFail_87E5D6344E55D3F63DC593810F826052(void* MovementResult);
    void OnSuccess_87E5D6344E55D3F63DC593810F826052(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Mrs_Puff_Search_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
