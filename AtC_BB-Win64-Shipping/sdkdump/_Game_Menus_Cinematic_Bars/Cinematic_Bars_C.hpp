#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Cinematic_Bars {
#pragma pack(push, 1)
struct Cinematic_Bars_C : public _Script_UMG::UserWidget {
    _Script_UMG::Image*& get_Image_37();
    _Script_UMG::Image*& get_Image_38();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
