#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ShapeComponent : public PrimitiveComponent {
    void* get_ShapeColor();
    _Script_Engine::BodySetup*& get_ShapeBodySetup();
    bool get_bDrawOnlyIfSelected();
    void set_bDrawOnlyIfSelected(bool value);
    bool get_bShouldCollideWhenPlacing();
    void set_bShouldCollideWhenPlacing(bool value);
    bool get_bDynamicObstacle();
    void set_bDynamicObstacle(bool value);
    void* get_AreaClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
