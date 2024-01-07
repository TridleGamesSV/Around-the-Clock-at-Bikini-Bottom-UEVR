#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LinearDriveConstraint {
    void* get_PositionTarget();
    void* get_VelocityTarget();
    void* get_XDrive();
    void* get_YDrive();
    void* get_ZDrive();
    bool get_bEnablePositionDrive();
    void set_bEnablePositionDrive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
