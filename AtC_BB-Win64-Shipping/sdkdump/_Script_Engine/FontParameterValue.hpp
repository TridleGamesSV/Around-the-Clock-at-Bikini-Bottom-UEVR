#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Font;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FontParameterValue {
    void* get_ParameterName();
    void* get_ParameterInfo();
    _Script_Engine::Font*& get_FontValue();
    int32_t& get_FontPage();
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
