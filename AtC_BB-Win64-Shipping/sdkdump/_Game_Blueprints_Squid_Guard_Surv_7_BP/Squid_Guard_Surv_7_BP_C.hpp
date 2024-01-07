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
namespace _Game_Blueprints_Squid_Guard_Surv_7_BP {
#pragma pack(push, 1)
struct Squid_Guard_Surv_7_BP_C : public _Script_Engine::Character {
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
    void OnFail_A84D630946DA4D168658B8B583224B71(void* MovementResult);
    void OnSuccess_A84D630946DA4D168658B8B583224B71(void* MovementResult);
    void OnFail_0894D4544C2F4B501D0F9D9E76A9A258(void* MovementResult);
    void OnSuccess_0894D4544C2F4B501D0F9D9E76A9A258(void* MovementResult);
    void OnFail_E1FD2B39437CB7379F0DEEAD2DAD5F17(void* MovementResult);
    void OnSuccess_E1FD2B39437CB7379F0DEEAD2DAD5F17(void* MovementResult);
    void OnFail_1FC37F0D487BDE404763C88A89062500(void* MovementResult);
    void OnSuccess_1FC37F0D487BDE404763C88A89062500(void* MovementResult);
    void OnFail_39ABA68F44DEB532AEC696A1CC5DD0B0(void* MovementResult);
    void OnSuccess_39ABA68F44DEB532AEC696A1CC5DD0B0(void* MovementResult);
    void OnFail_C227AF494C25D5BC1325BFB575AAD3C0(void* MovementResult);
    void OnSuccess_C227AF494C25D5BC1325BFB575AAD3C0(void* MovementResult);
    void OnFail_1CBF3B5C4D1A273370EEF88FA1851991(void* MovementResult);
    void OnSuccess_1CBF3B5C4D1A273370EEF88FA1851991(void* MovementResult);
    void OnFail_1F0B07B04C9C8AC1213ED18A5D45C1C8(void* MovementResult);
    void OnSuccess_1F0B07B04C9C8AC1213ED18A5D45C1C8(void* MovementResult);
    void OnFail_2F6FF6CC4ED6C8ECE68BD49F5B1DCB3E(void* MovementResult);
    void OnSuccess_2F6FF6CC4ED6C8ECE68BD49F5B1DCB3E(void* MovementResult);
    void OnFail_415B14EA434BBBA330CB6CBD9F409ED5(void* MovementResult);
    void OnSuccess_415B14EA434BBBA330CB6CBD9F409ED5(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Squid_Guard_Surv_7_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
