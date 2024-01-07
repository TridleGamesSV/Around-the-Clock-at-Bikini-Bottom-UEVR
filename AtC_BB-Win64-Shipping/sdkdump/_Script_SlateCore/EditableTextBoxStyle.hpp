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
struct EditableTextBoxStyle : public SlateWidgetStyle {
    void* get_BackgroundImageNormal();
    void* get_BackgroundImageHovered();
    void* get_BackgroundImageFocused();
    void* get_BackgroundImageReadOnly();
    void* get_Padding();
    void* get_Font();
    void* get_ForegroundColor();
    void* get_BackgroundColor();
    void* get_ReadOnlyForegroundColor();
    void* get_HScrollBarPadding();
    void* get_VScrollBarPadding();
    void* get_ScrollBarStyle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
