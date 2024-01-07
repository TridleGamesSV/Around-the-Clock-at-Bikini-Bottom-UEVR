#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct CanvasPanel : public PanelWidget {
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::CanvasPanelSlot* AddChildToCanvas(_Script_UMG::Widget* Content);
}; // Size: 0x28
#pragma pack(pop)
}
