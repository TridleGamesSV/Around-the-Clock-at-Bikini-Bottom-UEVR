#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitLightEstimate {
    bool get_bIsValid();
    void set_bIsValid(bool value);
    float& get_AmbientIntensity();
    float& get_AmbientColorTemperatureKelvin();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
