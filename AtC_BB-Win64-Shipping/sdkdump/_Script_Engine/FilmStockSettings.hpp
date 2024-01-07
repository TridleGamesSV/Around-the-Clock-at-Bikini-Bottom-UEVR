#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FilmStockSettings {
    float& get_Slope();
    float& get_Toe();
    float& get_Shoulder();
    float& get_BlackClip();
    float& get_WhiteClip();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
