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
namespace _Game_Menus_Info_Map {
#pragma pack(push, 1)
struct Info_Map_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pull();
    _Script_UMG::Button*& get_Button_84();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_18();
    _Script_UMG::Image*& get_Image_19();
    _Script_UMG::Image*& get_Image_20();
    _Script_UMG::Image*& get_Image_21();
    _Script_UMG::Image*& get_Image_22();
    _Script_UMG::Image*& get_Image_23();
    _Script_UMG::Image*& get_Image_31();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__Button_84_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature();
    void Construct0();
    void BndEvt__Button_188_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_70_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Info_Map(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
