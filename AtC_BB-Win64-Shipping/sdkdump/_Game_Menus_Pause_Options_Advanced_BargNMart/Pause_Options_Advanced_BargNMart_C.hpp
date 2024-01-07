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
struct Slider;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_Blueprints_MySaveGame {
struct MySaveGame_C;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Pause_Options_Advanced_BargNMart {
#pragma pack(push, 1)
struct Pause_Options_Advanced_BargNMart_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade_In();
    _Script_UMG::WidgetAnimation*& get_Pull();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::Button*& get_Button_1();
    _Script_UMG::Button*& get_Button_2();
    _Script_UMG::Button*& get_Button_3();
    _Script_UMG::Button*& get_Button_4();
    _Script_UMG::Button*& get_Button_5();
    _Script_UMG::Button*& get_Button_6();
    _Script_UMG::Button*& get_Button_7();
    _Script_UMG::Button*& get_Button_8();
    _Script_UMG::Button*& get_Button_9();
    _Script_UMG::Button*& get_Button_10();
    _Script_UMG::Button*& get_Button_11();
    _Script_UMG::Button*& get_Button_12();
    _Script_UMG::Button*& get_Button_13();
    _Script_UMG::Button*& get_Button_14();
    _Script_UMG::Button*& get_Button_15();
    _Script_UMG::Button*& get_Button_16();
    _Script_UMG::Button*& get_Button_17();
    _Script_UMG::Button*& get_Button_84();
    _Script_UMG::Button*& get_Button_188();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_92();
    _Script_UMG::Image*& get_Image_183();
    _Script_UMG::Image*& get_Image_184();
    _Script_UMG::Image*& get_Image_185();
    _Script_UMG::Slider*& get_Slider_0();
    _Script_UMG::Slider*& get_Slider_1();
    _Script_UMG::Slider*& get_Slider_87();
    _Script_UMG::Slider*& get_Slider_88();
    _Script_UMG::Slider*& get_Slider_89();
    _Script_UMG::Slider*& get_Slider_90();
    _Game_Blueprints_MySaveGame::MySaveGame_C*& get_Settings();
    _Script_Engine::SaveGame*& get_SaverSubClass();
    float& get_MouseSensitivity();
    float& get_MaxMouseSensitivity();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__Button_84_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature();
    void Construct0();
    void BndEvt__Button_188_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_70_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_2_K2Node_ComponentBoundEvent_1002_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_3_K2Node_ComponentBoundEvent_1023_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_4_K2Node_ComponentBoundEvent_1045_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_5_K2Node_ComponentBoundEvent_1076_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_6_K2Node_ComponentBoundEvent_1100_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_7_K2Node_ComponentBoundEvent_1125_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_8_K2Node_ComponentBoundEvent_1159_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_9_K2Node_ComponentBoundEvent_1186_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_10_K2Node_ComponentBoundEvent_1214_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_11_K2Node_ComponentBoundEvent_1251_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_12_K2Node_ComponentBoundEvent_1281_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_13_K2Node_ComponentBoundEvent_1312_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_14_K2Node_ComponentBoundEvent_1383_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_15_K2Node_ComponentBoundEvent_1416_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Slider_87_K2Node_ComponentBoundEvent_257_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_88_K2Node_ComponentBoundEvent_637_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_89_K2Node_ComponentBoundEvent_673_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_90_K2Node_ComponentBoundEvent_879_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_0_K2Node_ComponentBoundEvent_327_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Slider_1_K2Node_ComponentBoundEvent_366_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_16_K2Node_ComponentBoundEvent_154_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_17_K2Node_ComponentBoundEvent_195_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Pause_Options_Advanced_BargNMart(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
