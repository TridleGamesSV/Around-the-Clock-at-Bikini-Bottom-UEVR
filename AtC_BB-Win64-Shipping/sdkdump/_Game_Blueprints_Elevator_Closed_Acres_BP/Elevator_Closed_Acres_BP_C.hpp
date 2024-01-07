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
namespace _Game_Blueprints_Elevator_Closed_Acres_BP {
#pragma pack(push, 1)
struct Elevator_Closed_Acres_BP_C : public _Script_Engine::Actor {
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x28
#pragma pack(pop)
}
