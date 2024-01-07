#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundMix;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PassiveSoundMixModifier {
    _Script_Engine::SoundMix*& get_SoundMix();
    float& get_MinVolumeThreshold();
    float& get_MaxVolumeThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
