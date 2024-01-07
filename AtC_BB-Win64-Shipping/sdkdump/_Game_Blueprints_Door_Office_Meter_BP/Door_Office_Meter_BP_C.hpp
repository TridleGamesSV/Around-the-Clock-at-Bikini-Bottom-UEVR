#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Door_Office_Meter_BP {
#pragma pack(push, 1)
struct Door_Office_Meter_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_Door_Health();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Door_Office_Meter_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
