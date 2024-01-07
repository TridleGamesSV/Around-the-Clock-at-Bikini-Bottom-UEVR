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
namespace _Game_Talk_Widgets_Squidward_Jellyfishing_Minigame_Win_Talk_1 {
#pragma pack(push, 1)
struct Squidward_Jellyfishing_Minigame_Win_Talk_1_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Button*& get_Button_132();
    _Script_UMG::Button*& get_Button_133();
    _Script_UMG::Image*& get_Image_20();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void BndEvt__Button_132_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_133_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_Squidward_Jellyfishing_Minigame_Win_Talk_1(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
