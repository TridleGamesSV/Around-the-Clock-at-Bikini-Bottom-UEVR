#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "WheeledVehicleMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct WheeledVehicleMovementComponent4W : public WheeledVehicleMovementComponent {
    void* get_EngineSetup();
    void* get_DifferentialSetup();
    void* get_TransmissionSetup();
    void* get_SteeringCurve();
    float& get_AckermannAccuracy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
