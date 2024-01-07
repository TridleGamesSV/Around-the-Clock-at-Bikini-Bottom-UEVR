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
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Surveillance_9_Movement {
#pragma pack(push, 1)
struct Surveillance_9_Movement_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Button*& get_Button_96();
    _Script_UMG::Image*& get_Image_58();
    _Script_UMG::Image*& get_Image_59();
    _Script_UMG::Image*& get_Image_60();
    _Script_UMG::Image*& get_Image_61();
    _Script_UMG::Image*& get_Image_62();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__Button_96_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Surveillance_9_Movement(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
