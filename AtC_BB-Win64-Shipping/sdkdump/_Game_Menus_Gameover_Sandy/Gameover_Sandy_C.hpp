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
namespace _Game_Menus_Gameover_Sandy {
#pragma pack(push, 1)
struct Gameover_Sandy_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hint_1();
    _Script_UMG::WidgetAnimation*& get_You_Sure();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Button*& get_Button_85();
    _Script_UMG::Button*& get_Button_86();
    _Script_UMG::Button*& get_Button_87();
    _Script_UMG::Image*& get_Image_37();
    _Script_UMG::Image*& get_Image_38();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__Button_85_K2Node_ComponentBoundEvent_76_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_86_K2Node_ComponentBoundEvent_93_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_87_K2Node_ComponentBoundEvent_111_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Gameover_Sandy(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
