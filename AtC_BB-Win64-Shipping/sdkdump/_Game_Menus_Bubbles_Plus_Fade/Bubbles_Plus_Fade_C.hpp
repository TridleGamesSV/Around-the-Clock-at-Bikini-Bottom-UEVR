#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CircularThrobber;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Bubbles_Plus_Fade {
#pragma pack(push, 1)
struct Bubbles_Plus_Fade_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pull();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_30();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_31();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_32();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_33();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_34();
    _Script_UMG::CircularThrobber*& get_CircularThrobber_35();
    _Script_UMG::Image*& get_Image_0();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Bubbles_Plus_Fade(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
