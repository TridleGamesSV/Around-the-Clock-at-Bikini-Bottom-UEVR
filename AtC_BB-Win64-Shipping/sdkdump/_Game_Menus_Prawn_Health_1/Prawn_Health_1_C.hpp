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
namespace _Game_Menus_Prawn_Health_1 {
#pragma pack(push, 1)
struct Prawn_Health_1_C : public _Script_UMG::UserWidget {
    _Script_UMG::Image*& get_Image_29();
    static _Script_CoreUObject::Class* static_class();
    float GetPercent_0();
}; // Size: 0x28
#pragma pack(pop)
}
