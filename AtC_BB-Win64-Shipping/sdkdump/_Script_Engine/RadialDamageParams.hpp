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
struct RadialDamageParams {
    float& get_BaseDamage();
    float& get_MinimumDamage();
    float& get_InnerRadius();
    float& get_OuterRadius();
    float& get_DamageFalloff();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
