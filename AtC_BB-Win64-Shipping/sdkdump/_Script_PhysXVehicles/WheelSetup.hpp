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
struct WheelSetup {
    void* get_WheelClass();
    void* get_BoneName();
    void* get_AdditionalOffset();
    bool get_bDisableSteering();
    void set_bDisableSteering(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
