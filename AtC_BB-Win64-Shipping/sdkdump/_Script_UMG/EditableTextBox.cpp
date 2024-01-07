#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "EditableTextBox.hpp"
#include "Widget.hpp"
void* _Script_UMG::EditableTextBox::get_Text() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::EditableTextBox::get_HintText() {
    return (void*)((uintptr_t)this + 0x858);
}
void _Script_UMG::EditableTextBox::ClearError() {
    return;
}
void* _Script_UMG::EditableTextBox::get_TextDelegate() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::EditableTextBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x128);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::EditableTextBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x850);
}
void* _Script_UMG::EditableTextBox::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x870);
}
void* _Script_UMG::EditableTextBox::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x8d8);
}
bool _Script_UMG::EditableTextBox::get_SelectAllTextWhenFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x921 + 0)) & 1 != 0;
}
void* _Script_UMG::EditableTextBox::get_Font() {
    return (void*)((uintptr_t)this + 0x880);
}
void* _Script_UMG::EditableTextBox::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0x8e8);
}
void* _Script_UMG::EditableTextBox::get_ReadOnlyForegroundColor() {
    return (void*)((uintptr_t)this + 0x8f8);
}
bool _Script_UMG::EditableTextBox::get_IsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x908 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x908 + 0);
    *(uint8_t*)((uintptr_t)this + 0x908 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_IsPassword() {
    return (*(uint8_t*)((uintptr_t)this + 0x909 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsPassword(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x909 + 0);
    *(uint8_t*)((uintptr_t)this + 0x909 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::EditableTextBox::get_MinimumDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x90c);
}
void* _Script_UMG::EditableTextBox::get_Padding() {
    return (void*)((uintptr_t)this + 0x910);
}
void* _Script_UMG::EditableTextBox::get_ShapedTextOptions() {
    return (void*)((uintptr_t)this + 0x92c);
}
bool _Script_UMG::EditableTextBox::get_IsCaretMovedWhenGainFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x920 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_IsCaretMovedWhenGainFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x920 + 0);
    *(uint8_t*)((uintptr_t)this + 0x920 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::EditableTextBox::set_SelectAllTextWhenFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x921 + 0);
    *(uint8_t*)((uintptr_t)this + 0x921 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_RevertTextOnEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x922 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_RevertTextOnEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x922 + 0);
    *(uint8_t*)((uintptr_t)this + 0x922 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x923 + 0)) & 1 != 0;
}
void _Script_UMG::EditableTextBox::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x923 + 0);
    *(uint8_t*)((uintptr_t)this + 0x923 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_SelectAllTextOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x924 + 0)) & 1 != 0;
}
void* _Script_UMG::EditableTextBox::get_KeyboardType() {
    return (void*)((uintptr_t)this + 0x926);
}
void _Script_UMG::EditableTextBox::set_SelectAllTextOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x924 + 0);
    *(uint8_t*)((uintptr_t)this + 0x924 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::EditableTextBox::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x925 + 0);
    *(uint8_t*)((uintptr_t)this + 0x925 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::EditableTextBox::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x925 + 0)) & 1 != 0;
}
void* _Script_UMG::EditableTextBox::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0x927);
}
void* _Script_UMG::EditableTextBox::get_Justification() {
    return (void*)((uintptr_t)this + 0x928);
}
void* _Script_UMG::EditableTextBox::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0x938);
}
void* _Script_UMG::EditableTextBox::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0x948);
}
_Script_CoreUObject::Class* _Script_UMG::EditableTextBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.EditableTextBox");
    return result;
}
void _Script_UMG::EditableTextBox::SetText(void* InText) {
    return;
}
void _Script_UMG::EditableTextBox::SetIsReadOnly(bool bReadOnly) {
    return;
}
void _Script_UMG::EditableTextBox::SetHintText(void* InText) {
    return;
}
void _Script_UMG::EditableTextBox::SetError(void* InError) {
    return;
}
bool _Script_UMG::EditableTextBox::HasError() {
    return;
}
void* _Script_UMG::EditableTextBox::GetText() {
    return;
}
