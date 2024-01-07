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
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Pearl_Sleep_UI_3 {
#pragma pack(push, 1)
struct Pearl_Sleep_UI_3_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Shake();
    _Script_UMG::Image*& get_Image_31();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Pearl_Sleep_UI_3(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
