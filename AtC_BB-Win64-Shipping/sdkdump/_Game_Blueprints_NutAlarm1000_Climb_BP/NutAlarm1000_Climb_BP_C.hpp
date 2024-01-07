#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_NutAlarm1000_Climb_BP {
#pragma pack(push, 1)
struct NutAlarm1000_Climb_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_Nut_Alarm_Mesh();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NutAlarm1000_Climb_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
