#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "PanelWidget.hpp"
#include "ScrollBox.hpp"
#include "Widget.hpp"
void* _Script_UMG::ScrollBox::get_ConsumeMouseWheel() {
    return (void*)((uintptr_t)this + 0x752);
}
void* _Script_UMG::ScrollBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::ScrollBox::get_WidgetBarStyle() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBox::get_BarStyle() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x748);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::ScrollBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x740);
}
void* _Script_UMG::ScrollBox::get_Orientation() {
    return (void*)((uintptr_t)this + 0x750);
}
void* _Script_UMG::ScrollBox::get_ScrollBarVisibility() {
    return (void*)((uintptr_t)this + 0x751);
}
void* _Script_UMG::ScrollBox::get_ScrollbarThickness() {
    return (void*)((uintptr_t)this + 0x754);
}
bool _Script_UMG::ScrollBox::get_AlwaysShowScrollbar() {
    return (*(uint8_t*)((uintptr_t)this + 0x75c + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_AlwaysShowScrollbar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75c + 0);
    *(uint8_t*)((uintptr_t)this + 0x75c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ScrollBox::get_AllowOverscroll() {
    return (*(uint8_t*)((uintptr_t)this + 0x75d + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::SetScrollOffset(float NewScrollOffset) {
    return;
}
void _Script_UMG::ScrollBox::set_AllowOverscroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75d + 0);
    *(uint8_t*)((uintptr_t)this + 0x75d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ScrollBox::get_NavigationDestination() {
    return (void*)((uintptr_t)this + 0x75e);
}
void _Script_UMG::ScrollBox::ScrollWidgetIntoView(_Script_UMG::Widget* WidgetToFind, bool AnimateScroll, void* ScrollDestination) {
    return;
}
float& _Script_UMG::ScrollBox::get_NavigationScrollPadding() {
    return *(float*)((uintptr_t)this + 0x760);
}
bool _Script_UMG::ScrollBox::get_bAllowRightClickDragScrolling() {
    return (*(uint8_t*)((uintptr_t)this + 0x764 + 0)) & 1 != 0;
}
void _Script_UMG::ScrollBox::set_bAllowRightClickDragScrolling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x764 + 0);
    *(uint8_t*)((uintptr_t)this + 0x764 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::ScrollBox::get_OnUserScrolled() {
    return (void*)((uintptr_t)this + 0x768);
}
_Script_CoreUObject::Class* _Script_UMG::ScrollBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.ScrollBox");
    return result;
}
void _Script_UMG::ScrollBox::SetScrollBarVisibility(void* NewScrollBarVisibility) {
    return;
}
void _Script_UMG::ScrollBox::SetScrollbarThickness(_Script_CoreUObject::Vector2D& NewScrollbarThickness) {
    return;
}
void _Script_UMG::ScrollBox::SetOrientation(void* NewOrientation) {
    return;
}
float _Script_UMG::ScrollBox::GetScrollOffset() {
    return;
}
void _Script_UMG::ScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
    return;
}
void _Script_UMG::ScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
    return;
}
void _Script_UMG::ScrollBox::ScrollToStart() {
    return;
}
void _Script_UMG::ScrollBox::ScrollToEnd() {
    return;
}
