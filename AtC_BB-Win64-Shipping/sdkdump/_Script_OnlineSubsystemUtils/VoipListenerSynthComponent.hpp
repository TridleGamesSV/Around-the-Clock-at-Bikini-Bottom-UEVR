#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct VoipListenerSynthComponent : public _Script_AudioMixer::SynthComponent {
    static _Script_CoreUObject::Class* static_class();
    bool IsIdling();
}; // Size: 0x28
#pragma pack(pop)
}
