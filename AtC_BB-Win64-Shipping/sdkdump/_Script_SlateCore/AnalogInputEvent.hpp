#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "KeyEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct AnalogInputEvent : public KeyEvent {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
