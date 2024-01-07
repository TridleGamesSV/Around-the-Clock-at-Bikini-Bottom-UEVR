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
struct CameraComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Blueprints_Golden_Boobman_AI_BP {
#pragma pack(push, 1)
struct Golden_Boobman_AI_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_scat();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Golden_Boobman();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_C2479C7648D7605A2EA813BCFA2315F2(void* MovementResult);
    void OnSuccess_C2479C7648D7605A2EA813BCFA2315F2(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Golden_Boobman_AI_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
