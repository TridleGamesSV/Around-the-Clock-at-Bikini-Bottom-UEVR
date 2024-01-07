#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "TableRowStyle.hpp"
void* _Script_SlateCore::TableRowStyle::get_SelectorFocusedBrush() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::TableRowStyle::get_EvenRowBackgroundBrush() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_SlateCore::TableRowStyle::get_ActiveBrush() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::TableRowStyle::get_ActiveHoveredBrush() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SlateCore::TableRowStyle::get_InactiveHoveredBrush() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SlateCore::TableRowStyle::get_InactiveBrush() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SlateCore::TableRowStyle::get_EvenRowBackgroundHoveredBrush() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_SlateCore::TableRowStyle::get_OddRowBackgroundHoveredBrush() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Script_SlateCore::TableRowStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.TableRowStyle");
    return result;
}
void* _Script_SlateCore::TableRowStyle::get_OddRowBackgroundBrush() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_SlateCore::TableRowStyle::get_TextColor() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_SlateCore::TableRowStyle::get_SelectedTextColor() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_SlateCore::TableRowStyle::get_DropIndicator_Above() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_SlateCore::TableRowStyle::get_DropIndicator_Onto() {
    return (void*)((uintptr_t)this + 0x508);
}
void* _Script_SlateCore::TableRowStyle::get_DropIndicator_Below() {
    return (void*)((uintptr_t)this + 0x580);
}
