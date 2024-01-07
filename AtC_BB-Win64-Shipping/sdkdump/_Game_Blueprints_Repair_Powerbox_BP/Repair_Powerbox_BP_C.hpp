#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Blueprints_Repair_Powerbox_BP {
#pragma pack(push, 1)
struct Repair_Powerbox_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Icon();
    _Script_Engine::StaticMeshComponent*& get_Percent();
    _Script_Engine::StaticMeshComponent*& get_Powerbox_3();
    _Script_Engine::StaticMeshComponent*& get_Powerbox_2();
    _Script_Engine::StaticMeshComponent*& get_Powerbox_1();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Interact_Powerbox();
    void ExecuteUbergraph_Repair_Powerbox_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
