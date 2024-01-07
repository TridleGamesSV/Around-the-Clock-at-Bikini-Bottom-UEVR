#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavCollision : public _Script_CoreUObject::Object {
    void* get_CylinderCollision();
    void* get_BoxCollision();
    void* get_AreaClass();
    bool get_bIsDynamicObstacle();
    void set_bIsDynamicObstacle(bool value);
    bool get_bGatherConvexGeometry();
    void set_bGatherConvexGeometry(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
