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
namespace _Game_Menus_Pause_Surv {
#pragma pack(push, 1)
struct Pause_Surv_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Yank();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::Button*& get_Button_1();
    _Script_UMG::Button*& get_Button_117();
    _Script_UMG::Button*& get_Button_185();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    void* get_Reset_Pause();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__Button_117_K2Node_ComponentBoundEvent_116_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_185_K2Node_ComponentBoundEvent_133_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_207_OnButtonPressedEvent__DelegateSignature();
    void Construct0();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_474_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Pause_Surv(int32_t EntryPoint);
    void Reset_Pause__DelegateSignature();
}; // Size: 0x28
#pragma pack(pop)
}
