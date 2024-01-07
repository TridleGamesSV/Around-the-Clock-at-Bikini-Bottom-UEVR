#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_Hash_Wander_BP {
#pragma pack(push, 1)
struct Hash_Wander_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::AudioComponent*& get_Jumpscare();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::StaticMeshComponent*& get_Arm();
    _Script_Engine::StaticMeshComponent*& get_Leg10();
    _Script_Engine::StaticMeshComponent*& get_Leg9();
    _Script_Engine::StaticMeshComponent*& get_Leg8();
    _Script_Engine::StaticMeshComponent*& get_Leg7();
    _Script_Engine::StaticMeshComponent*& get_Leg6();
    _Script_Engine::StaticMeshComponent*& get_Leg5();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Body();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    float& get_Timeline_1_Walk_DBA5623F44EF864A5E859EB8AADDC18B();
    void* get_Timeline_1__Direction_DBA5623F44EF864A5E859EB8AADDC18B();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_B2CD7DDE40E7B1CD91EF3FB4D9B6BA28(void* MovementResult);
    void OnSuccess_B2CD7DDE40E7B1CD91EF3FB4D9B6BA28(void* MovementResult);
    void OnFail_C9D1F363442249F5E5C48CBBFB6BE336(void* MovementResult);
    void OnSuccess_C9D1F363442249F5E5C48CBBFB6BE336(void* MovementResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ExecuteUbergraph_Hash_Wander_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
