#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
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
namespace _Game_Blueprints_Jellien_Pearl_After_BP {
#pragma pack(push, 1)
struct Jellien_Pearl_After_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_5();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_1();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_0_Walk_AC5674C144D843B1F13386B3E75543DF();
    void* get_Timeline_0__Direction_AC5674C144D843B1F13386B3E75543DF();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Timeline_1_Walk_16125BB9494F3FA0DCFBBE9ED1B008FC();
    void* get_Timeline_1__Direction_16125BB9494F3FA0DCFBBE9ED1B008FC();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Jellien_Pearl_After_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
