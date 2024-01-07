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
struct ColorGradingSettings {
    void* get_Global();
    void* get_Shadows();
    void* get_Midtones();
    void* get_Highlights();
    float& get_ShadowsMax();
    float& get_HighlightsMin();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
