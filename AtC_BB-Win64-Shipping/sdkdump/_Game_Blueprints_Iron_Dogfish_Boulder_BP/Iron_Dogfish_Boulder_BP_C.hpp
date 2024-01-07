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
struct AudioComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
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
namespace _Game_Blueprints_Iron_Dogfish_Boulder_BP {
#pragma pack(push, 1)
struct Iron_Dogfish_Boulder_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::AudioComponent*& get_Roll();
    _Script_Engine::StaticMeshComponent*& get_Boulder();
    float& get_Timeline_0_Walk_5C23B1504A039999FC9C0382CAEFC3B2();
    void* get_Timeline_0__Direction_5C23B1504A039999FC9C0382CAEFC3B2();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_79F29AAB4D489E10F5C84888FC7A361F(void* MovementResult);
    void OnSuccess_79F29AAB4D489E10F5C84888FC7A361F(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Iron_Dogfish_Boulder_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
