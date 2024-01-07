#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISenseConfig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISenseConfig_Sight : public AISenseConfig {
    void* get_Implementation();
    float& get_SightRadius();
    float& get_LoseSightRadius();
    float& get_PeripheralVisionAngleDegrees();
    void* get_DetectionByAffiliation();
    float& get_AutoSuccessRangeFromLastSeenLocation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
