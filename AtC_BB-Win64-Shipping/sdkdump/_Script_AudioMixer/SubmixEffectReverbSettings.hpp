#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectReverbSettings {
    float& get_Density();
    float& get_Diffusion();
    float& get_Gain();
    float& get_GainHF();
    float& get_DecayTime();
    float& get_DecayHFRatio();
    float& get_ReflectionsGain();
    float& get_ReflectionsDelay();
    float& get_LateGain();
    float& get_LateDelay();
    float& get_AirAbsorptionGainHF();
    float& get_WetLevel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
