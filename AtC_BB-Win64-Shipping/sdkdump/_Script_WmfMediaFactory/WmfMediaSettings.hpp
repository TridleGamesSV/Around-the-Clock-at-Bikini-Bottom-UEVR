#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_WmfMediaFactory {
#pragma pack(push, 1)
struct WmfMediaSettings : public _Script_CoreUObject::Object {
    bool get_AllowNonStandardCodecs();
    void set_AllowNonStandardCodecs(bool value);
    bool get_LowLatency();
    void set_LowLatency(bool value);
    bool get_NativeAudioOut();
    void set_NativeAudioOut(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
