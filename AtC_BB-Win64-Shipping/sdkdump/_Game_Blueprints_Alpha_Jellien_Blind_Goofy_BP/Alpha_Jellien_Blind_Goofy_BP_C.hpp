#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
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
namespace _Game_Blueprints_Alpha_Jellien_Blind_Goofy_BP {
#pragma pack(push, 1)
struct Alpha_Jellien_Blind_Goofy_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Dizzy_2();
    _Script_Engine::ParticleSystemComponent*& get_Dizzy_1();
    _Script_Engine::ParticleSystemComponent*& get_Stun();
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
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_1_Walk_0B90A96F470849C4BA5B24B4AB597055();
    void* get_Timeline_1__Direction_0B90A96F470849C4BA5B24B4AB597055();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_B73D069345DB3E5AA0384A9FF99D9E19(void* MovementResult);
    void OnSuccess_B73D069345DB3E5AA0384A9FF99D9E19(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Alpha_Jellien_Blind_Goofy_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
