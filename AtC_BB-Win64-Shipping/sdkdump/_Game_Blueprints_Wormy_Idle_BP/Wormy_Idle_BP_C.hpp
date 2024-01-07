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
struct TimelineComponent;
}
namespace _Game_Blueprints_Wormy_Idle_BP {
#pragma pack(push, 1)
struct Wormy_Idle_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Wing_2();
    _Script_Engine::StaticMeshComponent*& get_Wing_1();
    _Script_Engine::AudioComponent*& get_Flap();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_1_Walk_D1D2086D4EB89763AD434E820EAAD30D();
    void* get_Timeline_1__Direction_D1D2086D4EB89763AD434E820EAAD30D();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Wormy_Idle_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
