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
namespace _Game_Menus_Spam_E_Escape {
#pragma pack(push, 1)
struct Spam_E_Escape_C : public _Script_UMG::UserWidget {
    _Script_UMG::Image*& get_Image_27();
    _Script_UMG::Image*& get_Image_31();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
