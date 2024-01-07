#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CompositeFallbackFont.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct CompositeSubFont : public CompositeFallbackFont {
    void* get_CharacterRanges();
    void* get_Cultures();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
