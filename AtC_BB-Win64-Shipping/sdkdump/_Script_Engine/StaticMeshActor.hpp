#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticMeshActor : public Actor {
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    bool get_bStaticMeshReplicateMovement();
    void set_bStaticMeshReplicateMovement(bool value);
    void* get_NavigationGeometryGatheringMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
