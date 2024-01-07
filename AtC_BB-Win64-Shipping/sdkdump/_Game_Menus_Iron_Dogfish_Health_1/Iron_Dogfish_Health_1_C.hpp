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
namespace _Game_Menus_Iron_Dogfish_Health_1 {
#pragma pack(push, 1)
struct Iron_Dogfish_Health_1_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_29();
    static _Script_CoreUObject::Class* static_class();
    float GetPercent_0();
    void Construct0();
    void ExecuteUbergraph_Iron_Dogfish_Health_1(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
