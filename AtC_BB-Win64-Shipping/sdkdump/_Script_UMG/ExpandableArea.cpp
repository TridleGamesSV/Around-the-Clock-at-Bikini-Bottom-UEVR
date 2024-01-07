#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpandableArea.hpp"
#include "Widget.hpp"
bool _Script_UMG::ExpandableArea::get_bIsExpanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void* _Script_UMG::ExpandableArea::get_Style() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::ExpandableArea::get_BorderBrush() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_UMG::ExpandableArea::get_AreaPadding() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void* _Script_UMG::ExpandableArea::get_BorderColor() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Script_UMG::ExpandableArea::set_bIsExpanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::ExpandableArea::get_MaxHeight() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
void* _Script_UMG::ExpandableArea::get_HeaderPadding() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_UMG::ExpandableArea::get_OnExpansionChanged() {
    return (void*)((uintptr_t)this + 0x2d0);
}
_Script_UMG::Widget*& _Script_UMG::ExpandableArea::get_HeaderContent() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Widget*& _Script_UMG::ExpandableArea::get_BodyContent() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Script_UMG::ExpandableArea::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ExpandableArea");
    return result;
}
void _Script_UMG::ExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
    return;
}
void _Script_UMG::ExpandableArea::SetIsExpanded(bool IsExpanded) {
    return;
}
bool _Script_UMG::ExpandableArea::GetIsExpanded() {
    return;
}
