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
namespace _Game_Blueprints_Jellyfish_Zap_Menace_Minigame_BP {
#pragma pack(push, 1)
struct Jellyfish_Zap_Menace_Minigame_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_5();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Sway_Animation_1();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_0_Walk_7F21AC39422AA17ECFDF6181D761EF85();
    void* get_Timeline_0__Direction_7F21AC39422AA17ECFDF6181D761EF85();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    float& get_Timeline_1_Walk_83B2C58F4DB70B1D034B5D89B29DE3CA();
    void* get_Timeline_1__Direction_83B2C58F4DB70B1D034B5D89B29DE3CA();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellyfish_Zap_Menace_Minigame_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
