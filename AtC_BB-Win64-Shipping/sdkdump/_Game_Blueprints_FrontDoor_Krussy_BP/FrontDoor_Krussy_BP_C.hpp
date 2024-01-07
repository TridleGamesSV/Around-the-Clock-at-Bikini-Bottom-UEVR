#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct BoxComponent;
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
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_FrontDoor_Krussy_BP {
#pragma pack(push, 1)
struct FrontDoor_Krussy_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_FrontDoor_Krussy_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
