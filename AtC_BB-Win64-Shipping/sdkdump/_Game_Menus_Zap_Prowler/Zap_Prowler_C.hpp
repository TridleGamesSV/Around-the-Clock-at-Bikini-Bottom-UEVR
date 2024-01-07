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
namespace _Game_Menus_Zap_Prowler {
#pragma pack(push, 1)
struct Zap_Prowler_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::WidgetAnimation*& get_Zap();
    _Script_UMG::Image*& get_Image_27();
    _Script_UMG::Image*& get_Image_28();
    _Script_UMG::Image*& get_Image_29();
    _Script_UMG::Image*& get_Image_30();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Zap_Prowler(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
