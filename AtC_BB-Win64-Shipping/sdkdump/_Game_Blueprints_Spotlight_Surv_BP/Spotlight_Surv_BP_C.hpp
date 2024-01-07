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
struct SpotLightComponent;
}
namespace _Script_Engine {
struct Actor;
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
namespace _Game_Blueprints_Spotlight_Surv_BP {
#pragma pack(push, 1)
struct Spotlight_Surv_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_D14EFFB24DD5A72D8B02AD90A495AD57(void* MovementResult);
    void OnSuccess_D14EFFB24DD5A72D8B02AD90A495AD57(void* MovementResult);
    void OnFail_1208CDB046B343D062E4819678EEC7C3(void* MovementResult);
    void OnSuccess_1208CDB046B343D062E4819678EEC7C3(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Spotlight_Surv_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
