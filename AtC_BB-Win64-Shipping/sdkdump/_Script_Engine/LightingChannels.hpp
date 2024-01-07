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
struct LightingChannels {
    bool get_bChannel0();
    void set_bChannel0(bool value);
    bool get_bChannel1();
    void set_bChannel1(bool value);
    bool get_bChannel2();
    void set_bChannel2(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
