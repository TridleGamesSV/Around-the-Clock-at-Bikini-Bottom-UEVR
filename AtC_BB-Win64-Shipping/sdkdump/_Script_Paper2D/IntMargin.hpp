#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct IntMargin {
    int32_t& get_Left();
    int32_t& get_Top();
    int32_t& get_Right();
    int32_t& get_Bottom();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
