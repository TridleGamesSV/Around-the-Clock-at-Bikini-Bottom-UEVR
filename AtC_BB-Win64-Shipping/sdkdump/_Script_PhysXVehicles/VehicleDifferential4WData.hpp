#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct VehicleDifferential4WData {
    void* get_DifferentialType();
    float& get_FrontRearSplit();
    float& get_FrontLeftRightSplit();
    float& get_RearLeftRightSplit();
    float& get_CentreBias();
    float& get_FrontBias();
    float& get_RearBias();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
