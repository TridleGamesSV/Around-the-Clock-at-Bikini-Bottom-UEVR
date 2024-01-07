#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DamageEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RadialDamageEvent : public DamageEvent {
    void* get_Params();
    void* get_Origin();
    void* get_ComponentHits();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
