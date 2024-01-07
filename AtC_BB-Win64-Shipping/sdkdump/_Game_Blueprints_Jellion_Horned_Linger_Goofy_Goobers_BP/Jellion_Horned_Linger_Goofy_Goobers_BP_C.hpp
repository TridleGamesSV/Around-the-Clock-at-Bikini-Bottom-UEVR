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
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct CameraComponent;
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
namespace _Game_Blueprints_Jellion_Horned_Linger_Goofy_Goobers_BP {
#pragma pack(push, 1)
struct Jellion_Horned_Linger_Goofy_Goobers_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Attack_4();
    _Script_Engine::StaticMeshComponent*& get_Attack_3();
    _Script_Engine::StaticMeshComponent*& get_Attack_2();
    _Script_Engine::StaticMeshComponent*& get_Attack_1();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::StaticMeshComponent*& get_Animation_5();
    _Script_Engine::StaticMeshComponent*& get_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    float& get_Timeline_1_Walk_1B073FB844ABD9A75FC570A536EA0835();
    void* get_Timeline_1__Direction_1B073FB844ABD9A75FC570A536EA0835();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_E31C8CDF41F88EA220BD8191C378EB2B(void* MovementResult);
    void OnSuccess_E31C8CDF41F88EA220BD8191C378EB2B(void* MovementResult);
    void OnFail_3B918FE7490C903E366B29AC2856D366(void* MovementResult);
    void OnSuccess_3B918FE7490C903E366B29AC2856D366(void* MovementResult);
    void OnFail_1A78397844E6743B5FF32A84E32F1CD9(void* MovementResult);
    void OnSuccess_1A78397844E6743B5FF32A84E32F1CD9(void* MovementResult);
    void OnFail_380896B54D7D90F4BB529BA2F990B893(void* MovementResult);
    void OnSuccess_380896B54D7D90F4BB529BA2F990B893(void* MovementResult);
    void OnFail_5E1F9B224EFF051B060D8988AED4D707(void* MovementResult);
    void OnSuccess_5E1F9B224EFF051B060D8988AED4D707(void* MovementResult);
    void OnFail_028A76AC4CC27C67759389B241C78E8F(void* MovementResult);
    void OnSuccess_028A76AC4CC27C67759389B241C78E8F(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellion_Horned_Linger_Goofy_Goobers_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
