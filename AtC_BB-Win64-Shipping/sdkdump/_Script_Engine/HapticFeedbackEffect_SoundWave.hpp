#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "HapticFeedbackEffect_Base.hpp"
namespace _Script_Engine {
struct SoundWave;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HapticFeedbackEffect_SoundWave : public HapticFeedbackEffect_Base {
    _Script_Engine::SoundWave*& get_SoundWave();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
