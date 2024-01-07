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
struct DepthFieldGlowInfo {
    bool get_bEnableGlow();
    void set_bEnableGlow(bool value);
    void* get_GlowColor();
    void* get_GlowOuterRadius();
    void* get_GlowInnerRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
