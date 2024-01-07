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
namespace _Game_Menus_Time_Limit_Anchor {
#pragma pack(push, 1)
struct Time_Limit_Anchor_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Tick_Down();
    _Script_UMG::Image*& get_Image_26();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Time_Limit_Anchor(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
