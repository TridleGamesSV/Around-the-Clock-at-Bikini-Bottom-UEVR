#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTDecorator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTDecorator_SetTagCooldown : public BTDecorator {
    void* get_CooldownTag();
    float& get_CooldownDuration();
    bool get_bAddToExistingDuration();
    void set_bAddToExistingDuration(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
