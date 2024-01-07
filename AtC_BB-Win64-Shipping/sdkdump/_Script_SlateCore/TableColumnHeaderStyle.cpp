#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "TableColumnHeaderStyle.hpp"
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortPrimaryAscendingImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortPrimaryDescendingImage() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortSecondaryAscendingImage() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownNormalBorderBrush() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_SortSecondaryDescendingImage() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownImage() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_NormalBrush() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_HoveredBrush() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_SlateCore::TableColumnHeaderStyle::get_MenuDropdownHoveredBorderBrush() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_SlateCore::TableColumnHeaderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.TableColumnHeaderStyle");
    return result;
}
