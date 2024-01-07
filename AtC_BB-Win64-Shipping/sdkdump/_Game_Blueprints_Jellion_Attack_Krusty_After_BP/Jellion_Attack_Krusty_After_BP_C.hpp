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
struct TimelineComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Jellion_Attack_Krusty_After_BP {
#pragma pack(push, 1)
struct Jellion_Attack_Krusty_After_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_0_Walk_C8B5D68F4AB522FD7A21E2B4628618F7();
    void* get_Timeline_0__Direction_C8B5D68F4AB522FD7A21E2B4628618F7();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Timeline_1_Walk_C4886A4647504B642A1D638F7F83DD87();
    void* get_Timeline_1__Direction_C4886A4647504B642A1D638F7F83DD87();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_A647F01B41FFBF4082B58A86531729A2(void* MovementResult);
    void OnSuccess_A647F01B41FFBF4082B58A86531729A2(void* MovementResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Jellion_Attack_Krusty_After_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
