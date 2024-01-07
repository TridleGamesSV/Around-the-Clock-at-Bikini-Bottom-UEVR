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
struct AngularDriveConstraint {
    void* get_TwistDrive();
    void* get_SwingDrive();
    void* get_SlerpDrive();
    void* get_OrientationTarget();
    void* get_AngularVelocityTarget();
    void* get_AngularDriveMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
