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
namespace _Game_Blueprints_Jellien_Pinkie_After_KK_OM_4_BP {
#pragma pack(push, 1)
struct Jellien_Pinkie_After_KK_OM_4_BP_C : public _Script_Engine::Character {
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
    float& get_Timeline_0_Walk_8B32E26B473B3A9E1F58FEA2A9A33AFC();
    void* get_Timeline_0__Direction_8B32E26B473B3A9E1F58FEA2A9A33AFC();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Timeline_1_Walk_F2B0C4B94448078C99FD5F8FF3997599();
    void* get_Timeline_1__Direction_F2B0C4B94448078C99FD5F8FF3997599();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    int32_t& get_EnemyHealth();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Jellien_Pinkie_After_KK_OM_4_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
