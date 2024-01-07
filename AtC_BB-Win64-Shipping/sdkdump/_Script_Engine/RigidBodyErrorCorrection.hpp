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
struct RigidBodyErrorCorrection {
    float& get_LinearDeltaThresholdSq();
    float& get_LinearInterpAlpha();
    float& get_LinearRecipFixTime();
    float& get_AngularDeltaThreshold();
    float& get_AngularInterpAlpha();
    float& get_AngularRecipFixTime();
    float& get_BodySpeedThresholdSq();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
