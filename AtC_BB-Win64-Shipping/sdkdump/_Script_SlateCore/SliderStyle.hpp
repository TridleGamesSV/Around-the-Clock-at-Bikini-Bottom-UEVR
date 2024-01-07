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
struct SliderStyle : public SlateWidgetStyle {
    void* get_NormalBarImage();
    void* get_DisabledBarImage();
    void* get_NormalThumbImage();
    void* get_DisabledThumbImage();
    float& get_BarThickness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
