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
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Patrick_Follow_Flamethrower_Attack_Tentacle_1_BP {
#pragma pack(push, 1)
struct Patrick_Follow_Flamethrower_Attack_Tentacle_1_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::AudioComponent*& get_Flamethrower_Loop();
    _Script_Engine::AudioComponent*& get_Flamethrower_Start();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::ParticleSystemComponent*& get_Fire();
    _Script_Engine::AudioComponent*& get_Walk();
    _Script_Engine::StaticMeshComponent*& get_Fire_3();
    _Script_Engine::StaticMeshComponent*& get_Fire_2();
    _Script_Engine::StaticMeshComponent*& get_Fire_1();
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
    _Script_Engine::StaticMeshComponent*& get_Patrick();
    int32_t& get_Patrick_HP();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_22056FDD4F8B3A7A075CBAA49FC4970F(void* MovementResult);
    void OnSuccess_22056FDD4F8B3A7A075CBAA49FC4970F(void* MovementResult);
    void OnFail_DD71A4454933884BAB5BE99A4A2D0DC3(void* MovementResult);
    void OnSuccess_DD71A4454933884BAB5BE99A4A2D0DC3(void* MovementResult);
    void OnFail_B84EEF3C4BAFDA8DBBC81E9B251DAD81(void* MovementResult);
    void OnSuccess_B84EEF3C4BAFDA8DBBC81E9B251DAD81(void* MovementResult);
    void OnFail_718B78C14BF34552B92652BA4E0ADB4E(void* MovementResult);
    void OnSuccess_718B78C14BF34552B92652BA4E0ADB4E(void* MovementResult);
    void OnFail_E04E53554EEDED695FC1B5B3A1879D49(void* MovementResult);
    void OnSuccess_E04E53554EEDED695FC1B5B3A1879D49(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Patrick_Follow_Flamethrower_Attack_Tentacle_1_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
