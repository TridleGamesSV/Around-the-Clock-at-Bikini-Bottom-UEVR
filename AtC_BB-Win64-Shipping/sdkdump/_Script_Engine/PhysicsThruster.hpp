#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RigidBodyBase.hpp"
namespace _Script_Engine {
struct PhysicsThrusterComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsThruster : public RigidBodyBase {
    _Script_Engine::PhysicsThrusterComponent*& get_ThrusterComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
