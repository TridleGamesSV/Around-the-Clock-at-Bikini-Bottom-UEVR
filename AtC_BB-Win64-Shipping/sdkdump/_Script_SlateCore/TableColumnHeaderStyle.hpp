#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct TableColumnHeaderStyle : public SlateWidgetStyle {
    void* get_SortPrimaryAscendingImage();
    void* get_SortPrimaryDescendingImage();
    void* get_SortSecondaryAscendingImage();
    void* get_SortSecondaryDescendingImage();
    void* get_NormalBrush();
    void* get_HoveredBrush();
    void* get_MenuDropdownImage();
    void* get_MenuDropdownNormalBorderBrush();
    void* get_MenuDropdownHoveredBorderBrush();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
