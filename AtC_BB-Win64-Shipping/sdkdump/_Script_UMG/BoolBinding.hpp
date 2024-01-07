#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PropertyBinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct BoolBinding : public PropertyBinding {
    static _Script_CoreUObject::Class* static_class();
    bool GetValue();
}; // Size: 0x28
#pragma pack(pop)
}
