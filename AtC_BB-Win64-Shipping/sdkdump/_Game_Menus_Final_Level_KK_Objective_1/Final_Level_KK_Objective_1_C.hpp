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
namespace _Game_Menus_Final_Level_KK_Objective_1 {
#pragma pack(push, 1)
struct Final_Level_KK_Objective_1_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_Image_89();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Final_Level_KK_Objective_1(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
