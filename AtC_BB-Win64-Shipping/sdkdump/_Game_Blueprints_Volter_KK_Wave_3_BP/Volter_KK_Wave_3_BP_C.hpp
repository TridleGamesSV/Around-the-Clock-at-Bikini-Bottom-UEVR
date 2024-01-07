#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
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
namespace _Game_Blueprints_Volter_KK_Wave_3_BP {
#pragma pack(push, 1)
struct Volter_KK_Wave_3_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::ParticleSystemComponent*& get_Dirt();
    _Script_Engine::PointLightComponent*& get_PointLight5();
    _Script_Engine::PointLightComponent*& get_PointLight4();
    _Script_Engine::PointLightComponent*& get_PointLight3();
    _Script_Engine::PointLightComponent*& get_PointLight2();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::PointLightComponent*& get_Charge_Light();
    _Script_Engine::ParticleSystemComponent*& get_Sparks();
    _Script_Engine::StaticMeshComponent*& get_Charge_3();
    _Script_Engine::StaticMeshComponent*& get_Charge_2();
    _Script_Engine::StaticMeshComponent*& get_Shoot_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Shoot_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Shoot_Animation_1();
    _Script_Engine::AudioComponent*& get_Shoot_3();
    _Script_Engine::AudioComponent*& get_Shoot_2();
    _Script_Engine::AudioComponent*& get_Shoot_1();
    _Script_Engine::StaticMeshComponent*& get_Charge_1();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Emerge_4();
    _Script_Engine::StaticMeshComponent*& get_Emerge_3();
    _Script_Engine::StaticMeshComponent*& get_Emerge_2();
    _Script_Engine::AudioComponent*& get_Emerge();
    _Script_Engine::AudioComponent*& get_Charge();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Emerge_1();
    float& get_Timeline_0_Walk_63C91B1A425D2065373021B4F7F64BB1();
    void* get_Timeline_0__Direction_63C91B1A425D2065373021B4F7F64BB1();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    int32_t& get_EnemyHealth();
    void* get_Gun_Offset();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Volter_KK_Wave_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
