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
namespace _Game_Menus_Jelly {
#pragma pack(push, 1)
struct Jelly_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_Image_16();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Jelly(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
