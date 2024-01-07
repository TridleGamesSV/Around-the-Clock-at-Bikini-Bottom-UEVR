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
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Alpha_Jellien_KK_Battle_Wave_4_BP {
#pragma pack(push, 1)
struct Alpha_Jellien_KK_Battle_Wave_4_BP_C : public _Script_Engine::Character {
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
    float& get_Timeline_1_Walk_7AB97A974F4DDF44E265B59A7F14F2C5();
    void* get_Timeline_1__Direction_7AB97A974F4DDF44E265B59A7F14F2C5();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    int32_t& get_EnemyHealth();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_743F810B4EEA59E95EA5B48F57805730(void* MovementResult);
    void OnSuccess_743F810B4EEA59E95EA5B48F57805730(void* MovementResult);
    void OnFail_6D22DCC342ACE0712D092393554845CE(void* MovementResult);
    void OnSuccess_6D22DCC342ACE0712D092393554845CE(void* MovementResult);
    void OnFail_6304478B4E8EAE65DEF241BC052B8B7E(void* MovementResult);
    void OnSuccess_6304478B4E8EAE65DEF241BC052B8B7E(void* MovementResult);
    void OnFail_DF6B351541482B1B0567E492D4547B64(void* MovementResult);
    void OnSuccess_DF6B351541482B1B0567E492D4547B64(void* MovementResult);
    void OnFail_498949C04847DCA4C9E257BA7DBF3B4F(void* MovementResult);
    void OnSuccess_498949C04847DCA4C9E257BA7DBF3B4F(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Alpha_Jellien_KK_Battle_Wave_4_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
