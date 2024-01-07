#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Pearl_Sleep_Walk_BP {
#pragma pack(push, 1)
struct Pearl_Sleep_Walk_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Snore_2();
    _Script_Engine::AudioComponent*& get_Snore_1();
    _Script_Engine::ParticleSystemComponent*& get_Zs();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_BF44DC15497BAFE8DA2A5B8182B9BD59(void* MovementResult);
    void OnSuccess_BF44DC15497BAFE8DA2A5B8182B9BD59(void* MovementResult);
    void OnFail_3F427E1B447F9D1B193672BD8C28B49C(void* MovementResult);
    void OnSuccess_3F427E1B447F9D1B193672BD8C28B49C(void* MovementResult);
    void OnFail_C74122704BD498EB34F81795285A3CFE(void* MovementResult);
    void OnSuccess_C74122704BD498EB34F81795285A3CFE(void* MovementResult);
    void OnFail_A4F7DB1E43D9C02EAEE5E59F9B375D6D(void* MovementResult);
    void OnSuccess_A4F7DB1E43D9C02EAEE5E59F9B375D6D(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Pearl_Sleep_Walk_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
