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
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Hint_Anchor_Widget {
#pragma pack(push, 1)
struct Hint_Anchor_Widget_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Button*& get_Button_80();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_10();
    _Script_UMG::Image*& get_Image_76();
    _Script_UMG::Image*& get_Image_77();
    _Script_UMG::Image*& get_Image_78();
    _Script_UMG::Image*& get_Image_79();
    _Script_UMG::Image*& get_Image_270();
    _Script_MediaAssets::MediaPlayer*& get_Media_Player();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__Button_80_K2Node_ComponentBoundEvent_98_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Hint_Anchor_Widget(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
