#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Jellien_Swarm_BP {
#pragma pack(push, 1)
struct Jellien_Swarm_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::AudioComponent*& get_Buzz();
    _Script_Engine::StaticMeshComponent*& get_Jelliens();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Timeline_0_Walk_EF96BCC0493EA0A43F2A45B0A6752BE3();
    void* get_Timeline_0__Direction_EF96BCC0493EA0A43F2A45B0A6752BE3();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Speed();
    _Script_Engine::Actor*& get_Actor_To_Move();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveTick0(float DeltaSeconds);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ExecuteUbergraph_Jellien_Swarm_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
