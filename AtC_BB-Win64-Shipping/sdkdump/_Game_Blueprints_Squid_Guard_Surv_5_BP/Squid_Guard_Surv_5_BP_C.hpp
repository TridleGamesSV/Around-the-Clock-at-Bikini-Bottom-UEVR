#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
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
struct SpotLightComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Squid_Guard_Surv_5_BP {
#pragma pack(push, 1)
struct Squid_Guard_Surv_5_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Leg_6();
    _Script_Engine::StaticMeshComponent*& get_Leg_5();
    _Script_Engine::StaticMeshComponent*& get_Leg_4();
    _Script_Engine::StaticMeshComponent*& get_Leg_3();
    _Script_Engine::StaticMeshComponent*& get_Leg_2();
    _Script_Engine::StaticMeshComponent*& get_Leg_1();
    _Script_Engine::StaticMeshComponent*& get_Worm_2();
    _Script_Engine::StaticMeshComponent*& get_Worm_1();
    _Script_Engine::AudioComponent*& get_Idle_5();
    _Script_Engine::AudioComponent*& get_Idle_4();
    _Script_Engine::AudioComponent*& get_Idle_3();
    _Script_Engine::AudioComponent*& get_Idle_2();
    _Script_Engine::AudioComponent*& get_Idle_1();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Flashlight();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Body();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_56CE1ED545CB6ED111A499A9B407F500(void* MovementResult);
    void OnSuccess_56CE1ED545CB6ED111A499A9B407F500(void* MovementResult);
    void OnFail_DFBDD1164549F34658B1EDB88723B975(void* MovementResult);
    void OnSuccess_DFBDD1164549F34658B1EDB88723B975(void* MovementResult);
    void OnFail_D346151543EE0F079F69BDA1D2D5F4B5(void* MovementResult);
    void OnSuccess_D346151543EE0F079F69BDA1D2D5F4B5(void* MovementResult);
    void OnFail_E9FFE424481C1DBB43E49085434753B9(void* MovementResult);
    void OnSuccess_E9FFE424481C1DBB43E49085434753B9(void* MovementResult);
    void OnFail_401E125E4F895437ABA187B43DCF8FA5(void* MovementResult);
    void OnSuccess_401E125E4F895437ABA187B43DCF8FA5(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Squid_Guard_Surv_5_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
