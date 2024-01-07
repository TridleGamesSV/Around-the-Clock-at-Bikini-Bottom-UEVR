#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackFloatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackFade : public InterpTrackFloatBase {
    bool get_bPersistFade();
    void set_bPersistFade(bool value);
    bool get_bFadeAudio();
    void set_bFadeAudio(bool value);
    void* get_FadeColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
