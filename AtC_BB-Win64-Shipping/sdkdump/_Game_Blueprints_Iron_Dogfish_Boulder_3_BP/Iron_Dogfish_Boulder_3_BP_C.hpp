#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TimelineComponent;
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
namespace _Game_Blueprints_Iron_Dogfish_Boulder_3_BP {
#pragma pack(push, 1)
struct Iron_Dogfish_Boulder_3_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::StaticMeshComponent*& get_Boulder();
    float& get_Timeline_0_Walk_69134D75400AE4255C427084070F8C5B();
    void* get_Timeline_0__Direction_69134D75400AE4255C427084070F8C5B();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_F6544FE445CA7FC4BB646EA48323A978(void* MovementResult);
    void OnSuccess_F6544FE445CA7FC4BB646EA48323A978(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Iron_Dogfish_Boulder_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
