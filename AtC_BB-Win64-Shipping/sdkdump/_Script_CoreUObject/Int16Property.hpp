#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NumericProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Int16Property : public NumericProperty {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
