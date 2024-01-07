#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct VolumeControlStyle : public SlateWidgetStyle {
    void* get_SliderStyle();
    void* get_HighVolumeImage();
    void* get_MidVolumeImage();
    void* get_LowVolumeImage();
    void* get_NoVolumeImage();
    void* get_MutedImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
