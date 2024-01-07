#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ARLightEstimate.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARBasicLightEstimate : public ARLightEstimate {
    float& get_AmbientIntensityLumens();
    float& get_AmbientColorTemperatureKelvin();
    static _Script_CoreUObject::Class* static_class();
    float GetAmbientIntensityLumens();
    float GetAmbientColorTemperatureKelvin();
    _Script_CoreUObject::LinearColor GetAmbientColor();
}; // Size: 0x28
#pragma pack(pop)
}
