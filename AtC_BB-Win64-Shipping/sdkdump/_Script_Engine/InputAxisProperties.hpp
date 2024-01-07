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
struct InputAxisProperties {
    float& get_DeadZone();
    float& get_Sensitivity();
    float& get_Exponent();
    bool get_bInvert();
    void set_bInvert(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
