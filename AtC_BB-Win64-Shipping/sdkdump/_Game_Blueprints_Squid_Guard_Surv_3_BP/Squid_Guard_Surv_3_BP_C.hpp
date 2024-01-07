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
namespace _Game_Blueprints_Squid_Guard_Surv_3_BP {
#pragma pack(push, 1)
struct Squid_Guard_Surv_3_BP_C : public _Script_Engine::Character {
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
    void OnFail_E40C7F3741D9CB643E8CE9AE89B7CFAD(void* MovementResult);
    void OnSuccess_E40C7F3741D9CB643E8CE9AE89B7CFAD(void* MovementResult);
    void OnFail_0DACEAA748A5A5AB7A10F995745103F0(void* MovementResult);
    void OnSuccess_0DACEAA748A5A5AB7A10F995745103F0(void* MovementResult);
    void OnFail_6BB880984E86391DF9984E9FA49C7CA1(void* MovementResult);
    void OnSuccess_6BB880984E86391DF9984E9FA49C7CA1(void* MovementResult);
    void OnFail_8D016F714AF4768DBC59D08682E41883(void* MovementResult);
    void OnSuccess_8D016F714AF4768DBC59D08682E41883(void* MovementResult);
    void OnFail_8170375646A5F9F84DA07F952EB477C3(void* MovementResult);
    void OnSuccess_8170375646A5F9F84DA07F952EB477C3(void* MovementResult);
    void OnFail_3970A96E402F780014D310802ECDF31C(void* MovementResult);
    void OnSuccess_3970A96E402F780014D310802ECDF31C(void* MovementResult);
    void OnFail_29DF2B1F4CB6E1B9E6FFD6BCD9C78C21(void* MovementResult);
    void OnSuccess_29DF2B1F4CB6E1B9E6FFD6BCD9C78C21(void* MovementResult);
    void OnFail_A40FD81749F4B36A4D0C7888DC062A7F(void* MovementResult);
    void OnSuccess_A40FD81749F4B36A4D0C7888DC062A7F(void* MovementResult);
    void OnFail_9B1BFFF54BABA1644D76ECB61959FA67(void* MovementResult);
    void OnSuccess_9B1BFFF54BABA1644D76ECB61959FA67(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Squid_Guard_Surv_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
