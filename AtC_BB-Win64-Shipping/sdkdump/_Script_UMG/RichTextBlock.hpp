#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TextLayoutWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RichTextBlock : public TextLayoutWidget {
    void* get_Text();
    void* get_TextDelegate();
    void* get_Font();
    void* get_Color();
    void* get_Decorators();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
