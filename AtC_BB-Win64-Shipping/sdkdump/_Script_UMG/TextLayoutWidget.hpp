#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct TextLayoutWidget : public Widget {
    void* get_ShapedTextOptions();
    void* get_Justification();
    bool get_AutoWrapText();
    void set_AutoWrapText(bool value);
    float& get_WrapTextAt();
    void* get_WrappingPolicy();
    void* get_Margin();
    float& get_LineHeightPercentage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
