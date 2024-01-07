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
struct PointLightComponent;
}
namespace _Script_Engine {
struct CameraComponent;
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
namespace _Game_Blueprints_Jellion_Horned_Blind_Goofy_Goobers_BP {
#pragma pack(push, 1)
struct Jellion_Horned_Blind_Goofy_Goobers_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Circles_2();
    _Script_Engine::ParticleSystemComponent*& get_Circles_1();
    _Script_Engine::ParticleSystemComponent*& get_Dizzy();
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
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    float& get_Timeline_1_Walk_888F14674307D7B986DA41B7FABFB4A1();
    void* get_Timeline_1__Direction_888F14674307D7B986DA41B7FABFB4A1();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_241F800D434D2B0F166893BA91795670(void* MovementResult);
    void OnSuccess_241F800D434D2B0F166893BA91795670(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Jellion_Horned_Blind_Goofy_Goobers_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
