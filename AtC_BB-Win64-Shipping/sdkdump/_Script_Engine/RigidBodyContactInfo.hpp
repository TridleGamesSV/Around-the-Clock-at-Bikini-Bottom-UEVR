#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RigidBodyContactInfo {
    void* get_ContactPosition();
    void* get_ContactNormal();
    float& get_ContactPenetration();
    _Script_Engine::PhysicalMaterial*& get_PhysMaterial();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
