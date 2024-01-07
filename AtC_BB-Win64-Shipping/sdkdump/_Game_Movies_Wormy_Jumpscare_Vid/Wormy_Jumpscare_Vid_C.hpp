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
namespace _Script_MediaAssets {
struct MediaPlayer;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Movies_Wormy_Jumpscare_Vid {
#pragma pack(push, 1)
struct Wormy_Jumpscare_Vid_C : public _Script_UMG::UserWidget {
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_Image_10();
    _Script_MediaAssets::MediaPlayer*& get_Media_Player();
    static _Script_CoreUObject::Class* static_class();
    void Construct0();
    void ExecuteUbergraph_Wormy_Jumpscare_Vid(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
