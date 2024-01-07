#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Paper2D {
struct PaperSprite;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperFlipbookKeyFrame {
    _Script_Paper2D::PaperSprite*& get_Sprite();
    int32_t& get_FrameRun();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
