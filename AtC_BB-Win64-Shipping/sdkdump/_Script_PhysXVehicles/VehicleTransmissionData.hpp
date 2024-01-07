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
struct VehicleTransmissionData {
    bool get_bUseGearAutoBox();
    void set_bUseGearAutoBox(bool value);
    float& get_GearSwitchTime();
    float& get_GearAutoBoxLatency();
    float& get_FinalRatio();
    void* get_ForwardGears();
    float& get_ReverseGearRatio();
    float& get_NeutralGearUpRatio();
    float& get_ClutchStrength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
