#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Krussy_Intro_Sub_1 {
#pragma pack(push, 1)
struct Krussy_Intro_Sub_1_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Krussy_Intro_Sub_1(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
