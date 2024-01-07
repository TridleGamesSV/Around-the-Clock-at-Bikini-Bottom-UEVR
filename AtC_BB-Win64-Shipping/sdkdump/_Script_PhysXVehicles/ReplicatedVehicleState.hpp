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
struct ReplicatedVehicleState {
    float& get_SteeringInput();
    float& get_ThrottleInput();
    float& get_BrakeInput();
    float& get_HandbrakeInput();
    int32_t& get_CurrentGear();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
