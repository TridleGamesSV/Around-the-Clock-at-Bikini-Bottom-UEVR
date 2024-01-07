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
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Menus_Minigame_Krussy_Win {
#pragma pack(push, 1)
struct Minigame_Krussy_Win_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Button*& get_Button_81();
    _Script_UMG::Button*& get_Button_82();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_21();
    _Script_Engine::SaveGame*& get_SaverSubClass();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__Button_81_K2Node_ComponentBoundEvent_136_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_82_K2Node_ComponentBoundEvent_153_OnButtonPressedEvent__DelegateSignature();
    void Construct0();
    void ExecuteUbergraph_Minigame_Krussy_Win(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
