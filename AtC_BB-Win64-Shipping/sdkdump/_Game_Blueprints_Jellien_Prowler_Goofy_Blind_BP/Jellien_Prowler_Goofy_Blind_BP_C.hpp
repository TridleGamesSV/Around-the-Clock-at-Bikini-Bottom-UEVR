#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
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
struct CameraComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
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
namespace _Game_Blueprints_Jellien_Prowler_Goofy_Blind_BP {
#pragma pack(push, 1)
struct Jellien_Prowler_Goofy_Blind_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Circles_3();
    _Script_Engine::ParticleSystemComponent*& get_Circles_2();
    _Script_Engine::ParticleSystemComponent*& get_Circles_1();
    _Script_Engine::ParticleSystemComponent*& get_Dizzy();
    _Script_Engine::StaticMeshComponent*& get_Swim_10();
    _Script_Engine::StaticMeshComponent*& get_Swim_9();
    _Script_Engine::StaticMeshComponent*& get_Swim_8();
    _Script_Engine::StaticMeshComponent*& get_Swim_7();
    _Script_Engine::StaticMeshComponent*& get_Swim_6();
    _Script_Engine::StaticMeshComponent*& get_Swim_5();
    _Script_Engine::StaticMeshComponent*& get_Swim_4();
    _Script_Engine::StaticMeshComponent*& get_Swim_3();
    _Script_Engine::StaticMeshComponent*& get_Swim_2();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::StaticMeshComponent*& get_Body_Opaque();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Swim_1();
    float& get_Timeline_1_Walk_720B5A67440BC2794F0A3A962E6C44BE();
    void* get_Timeline_1__Direction_720B5A67440BC2794F0A3A962E6C44BE();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_CD8DE76C4C8EB3289A5ED19D90BE50E0(void* MovementResult);
    void OnSuccess_CD8DE76C4C8EB3289A5ED19D90BE50E0(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Jellien_Prowler_Goofy_Blind_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
