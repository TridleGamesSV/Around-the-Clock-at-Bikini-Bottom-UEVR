#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Locked {
#pragma pack(push, 1)
struct Locked_C : public _Script_UMG::UserWidget {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
