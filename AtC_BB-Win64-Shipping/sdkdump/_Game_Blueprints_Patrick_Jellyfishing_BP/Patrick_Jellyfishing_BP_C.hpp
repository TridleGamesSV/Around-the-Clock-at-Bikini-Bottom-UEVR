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
namespace _Game_Blueprints_Patrick_Jellyfishing_BP {
#pragma pack(push, 1)
struct Patrick_Jellyfishing_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Arm5();
    _Script_Engine::StaticMeshComponent*& get_Arm4();
    _Script_Engine::StaticMeshComponent*& get_Arm3();
    _Script_Engine::StaticMeshComponent*& get_Arm2();
    _Script_Engine::StaticMeshComponent*& get_Arm1();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Leg10();
    _Script_Engine::AudioComponent*& get_Walk();
    _Script_Engine::StaticMeshComponent*& get_Leg9();
    _Script_Engine::StaticMeshComponent*& get_Leg8();
    _Script_Engine::StaticMeshComponent*& get_Leg7();
    _Script_Engine::StaticMeshComponent*& get_Leg6();
    _Script_Engine::StaticMeshComponent*& get_Leg5();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Patrick();
    int32_t& get_TotalJellyfishPatrick();
    static _Script_CoreUObject::Class* static_class();
    void Add_Patrick_Jellyfish();
    void UserConstructionScript();
    void OnFail_C54979DE4DD110C024020CB47753E971(void* MovementResult);
    void OnSuccess_C54979DE4DD110C024020CB47753E971(void* MovementResult);
    void OnFail_F999628B4F8E6C4310D0F8B0A91C4AC5(void* MovementResult);
    void OnSuccess_F999628B4F8E6C4310D0F8B0A91C4AC5(void* MovementResult);
    void OnFail_C0FD76D142C27B1960CCDF906B3BD988(void* MovementResult);
    void OnSuccess_C0FD76D142C27B1960CCDF906B3BD988(void* MovementResult);
    void OnFail_A9516FC4459BCF765EF1F99660E2E1E8(void* MovementResult);
    void OnSuccess_A9516FC4459BCF765EF1F99660E2E1E8(void* MovementResult);
    void OnFail_9AD6CDF74982CB7F1B95CE8436DE09C6(void* MovementResult);
    void OnSuccess_9AD6CDF74982CB7F1B95CE8436DE09C6(void* MovementResult);
    void OnFail_BE6D2E5248D93A8524BF5295769EAD33(void* MovementResult);
    void OnSuccess_BE6D2E5248D93A8524BF5295769EAD33(void* MovementResult);
    void OnFail_AA2C32884453124EAB5AFC8F548B0A2C(void* MovementResult);
    void OnSuccess_AA2C32884453124EAB5AFC8F548B0A2C(void* MovementResult);
    void OnFail_DBF7451B477B91DB06F3C4BABE993367(void* MovementResult);
    void OnSuccess_DBF7451B477B91DB06F3C4BABE993367(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Patrick_Jellyfishing_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
