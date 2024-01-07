#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct BoxComponent;
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
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Small_Monitor_Status_Screen_BP {
#pragma pack(push, 1)
struct Small_Monitor_Status_Screen_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Fusebox__();
    _Script_Engine::StaticMeshComponent*& get_Time();
    _Script_Engine::StaticMeshComponent*& get_Office__();
    _Script_Engine::StaticMeshComponent*& get_Kitchen__();
    _Script_Engine::StaticMeshComponent*& get_Bathroom__();
    _Script_Engine::StaticMeshComponent*& get_Dining_Hall__();
    _Script_Engine::StaticMeshComponent*& get_Status_Screen();
    _Script_Engine::StaticMeshComponent*& get_Static();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Small_Monitor_Status_Screen_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
