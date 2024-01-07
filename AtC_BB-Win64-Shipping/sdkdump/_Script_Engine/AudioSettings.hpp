#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioSettings : public DeveloperSettings {
    void* get_DefaultSoundClassName();
    void* get_DefaultSoundConcurrencyName();
    void* get_DefaultBaseSoundMix();
    void* get_VoiPSoundClass();
    void* get_VoiPSampleRate();
    float& get_VoipBufferingDelay();
    float& get_DefaultReverbSendLevel();
    float& get_LowPassFilterResonance();
    int32_t& get_MaximumConcurrentStreams();
    void* get_QualityLevels();
    bool get_bAllowVirtualizedSounds();
    void set_bAllowVirtualizedSounds(bool value);
    bool get_bDisableMasterEQ();
    void set_bDisableMasterEQ(bool value);
    bool get_bDisableMasterReverb();
    void set_bDisableMasterReverb(bool value);
    bool get_bAllowCenterChannel3DPanning();
    void set_bAllowCenterChannel3DPanning(bool value);
    void* get_DialogueFilenameFormat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
