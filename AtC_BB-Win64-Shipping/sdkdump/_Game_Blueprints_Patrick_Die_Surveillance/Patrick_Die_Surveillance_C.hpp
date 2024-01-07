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
struct TimelineComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Game_Blueprints_Patrick_Die_Surveillance {
#pragma pack(push, 1)
struct Patrick_Die_Surveillance_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Patrick();
    float& get_Timeline_0_Walk_29E0F1C84BA2310339F6B0AE2676034B();
    void* get_Timeline_0__Direction_29E0F1C84BA2310339F6B0AE2676034B();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Patrick_Die_Surveillance(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
