#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct BoundaryTestResult {
    bool get_IsTriggering();
    void set_IsTriggering(bool value);
    void* get_DeviceType();
    float& get_ClosestDistance();
    void* get_ClosestPoint();
    void* get_ClosestPointNormal();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
