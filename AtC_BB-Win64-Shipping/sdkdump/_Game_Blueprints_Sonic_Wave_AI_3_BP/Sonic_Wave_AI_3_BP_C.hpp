#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Sonic_Wave_AI_3_BP {
#pragma pack(push, 1)
struct Sonic_Wave_AI_3_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_Arrow1();
    _Script_Engine::BoxComponent*& get_PushBack();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Plane();
    _Script_Engine::Actor*& get_Actor_To_Move();
    float& get_Speed();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_FF7FFA054293913E950328BA075EE1C3(void* MovementResult);
    void OnSuccess_FF7FFA054293913E950328BA075EE1C3(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__PushBack_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PushBack_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Sonic_Wave_AI_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
