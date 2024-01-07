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
namespace _Game_Menus_Pour_Bar {
#pragma pack(push, 1)
struct Pour_Bar_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Build_Up();
    _Script_UMG::Image*& get_Image_31();
    _Script_UMG::Image*& get_Image_62();
    _Script_UMG::Image*& get_Image_63();
    _Script_UMG::Image*& get_Image_64();
    _Script_UMG::Image*& get_Image_65();
    _Script_UMG::Image*& get_Image_66();
    _Script_UMG::Image*& get_Image_67();
    _Script_UMG::Image*& get_Image_68();
    _Script_UMG::Image*& get_Image_69();
    _Script_UMG::Image*& get_Image_70();
    _Script_UMG::Image*& get_Image_71();
    _Script_UMG::Image*& get_Image_72();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Pour_Bar(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
