#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
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
namespace _Game_Blueprints_Alpha_Jellien_Goofy_Goobers_BP {
#pragma pack(push, 1)
struct Alpha_Jellien_Goofy_Goobers_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
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
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::StaticMeshComponent*& get_Open();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_1_Walk_C0165BCD49270F8A1AA901A8F0544739();
    void* get_Timeline_1__Direction_C0165BCD49270F8A1AA901A8F0544739();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_8F92EF4E4854A3F2119568A21FF17813(void* MovementResult);
    void OnSuccess_8F92EF4E4854A3F2119568A21FF17813(void* MovementResult);
    void OnFail_CD0AE3FE413247E4F56BD486E96B553C(void* MovementResult);
    void OnSuccess_CD0AE3FE413247E4F56BD486E96B553C(void* MovementResult);
    void OnFail_861596B549374E16B66E1C985369A42C(void* MovementResult);
    void OnSuccess_861596B549374E16B66E1C985369A42C(void* MovementResult);
    void OnFail_2B29171F41CE2E18D28F7093D252D9B1(void* MovementResult);
    void OnSuccess_2B29171F41CE2E18D28F7093D252D9B1(void* MovementResult);
    void OnFail_005981494761C2C215E7E2906996BE42(void* MovementResult);
    void OnSuccess_005981494761C2C215E7E2906996BE42(void* MovementResult);
    void OnFail_95BB0C534E8207B457E613A6FE2FE051(void* MovementResult);
    void OnSuccess_95BB0C534E8207B457E613A6FE2FE051(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Alpha_Jellien_Goofy_Goobers_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
