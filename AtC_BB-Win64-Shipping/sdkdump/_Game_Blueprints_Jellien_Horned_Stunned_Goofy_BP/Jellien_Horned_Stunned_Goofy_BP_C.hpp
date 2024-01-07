#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
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
namespace _Game_Blueprints_Jellien_Horned_Stunned_Goofy_BP {
#pragma pack(push, 1)
struct Jellien_Horned_Stunned_Goofy_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Dizzy();
    _Script_Engine::StaticMeshComponent*& get_Stun();
    float& get_Timeline_1_Walk_15AA67C14965BBD70A63ADA6A45AF12E();
    void* get_Timeline_1__Direction_15AA67C14965BBD70A63ADA6A45AF12E();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellien_Horned_Stunned_Goofy_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
