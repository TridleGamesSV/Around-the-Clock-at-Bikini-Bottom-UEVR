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
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Chase_Meter {
#pragma pack(push, 1)
struct Chase_Meter_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::WidgetAnimation*& get_Move();
    _Script_UMG::Image*& get_Image_43();
    _Script_UMG::Image*& get_Image_102();
    _Script_UMG::ProgressBar*& get_ProgressBar_80();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void Pause_Chase();
    void Unpause_Chase();
    void ExecuteUbergraph_Chase_Meter(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
