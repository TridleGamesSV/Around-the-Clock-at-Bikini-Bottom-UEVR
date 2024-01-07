#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
#pragma pack(push, 1)
struct SlateSettings : public _Script_CoreUObject::Object {
    bool get_bExplicitCanvasChildZOrder();
    void set_bExplicitCanvasChildZOrder(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
