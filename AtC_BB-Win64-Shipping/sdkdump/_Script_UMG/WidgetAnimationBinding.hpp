#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetAnimationBinding {
    void* get_WidgetName();
    void* get_SlotWidgetName();
    void* get_AnimationGuid();
    bool get_bIsRootWidget();
    void set_bIsRootWidget(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
