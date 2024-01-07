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
namespace _Game_Menus_Guitar_Cooldown_Bar_Golden {
#pragma pack(push, 1)
struct Guitar_Cooldown_Bar_Golden_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Discharged();
    _Script_UMG::WidgetAnimation*& get_Spin();
    _Script_UMG::WidgetAnimation*& get_Charged();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_356();
    _Script_UMG::ProgressBar*& get_ProgressBar_0();
    static _Script_CoreUObject::Class* static_class();
    float GetPercent_Guitar();
    float GetPercent_Cannon();
    float GetPercent_0();
    void Construct0();
    void ExecuteUbergraph_Guitar_Cooldown_Bar_Golden(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
