#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MultiLineEditableText.hpp"
#include "TextLayoutWidget.hpp"
void* _Script_UMG::MultiLineEditableText::get_HintTextDelegate() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_UMG::MultiLineEditableText::get_Text() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_UMG::MultiLineEditableText::get_HintText() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_UMG::MultiLineEditableText::get_SelectAllTextWhenFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
void* _Script_UMG::MultiLineEditableText::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x168);
}
void _Script_UMG::MultiLineEditableText::set_bIsReadOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x330 + 0);
    *(uint8_t*)((uintptr_t)this + 0x330 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_bIsReadOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x330 + 0)) & 1 != 0;
}
void* _Script_UMG::MultiLineEditableText::get_Font() {
    return (void*)((uintptr_t)this + 0x338);
}
void _Script_UMG::MultiLineEditableText::set_SelectAllTextWhenFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_ClearTextSelectionOnFocusLoss() {
    return (*(uint8_t*)((uintptr_t)this + 0x391 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_ClearTextSelectionOnFocusLoss(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_RevertTextOnEscape() {
    return (*(uint8_t*)((uintptr_t)this + 0x392 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_RevertTextOnEscape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x392 + 0);
    *(uint8_t*)((uintptr_t)this + 0x392 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_ClearKeyboardFocusOnCommit() {
    return (*(uint8_t*)((uintptr_t)this + 0x393 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_ClearKeyboardFocusOnCommit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x393 + 0);
    *(uint8_t*)((uintptr_t)this + 0x393 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::MultiLineEditableText::get_AllowContextMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 1 != 0;
}
void _Script_UMG::MultiLineEditableText::set_AllowContextMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::MultiLineEditableText::get_VirtualKeyboardDismissAction() {
    return (void*)((uintptr_t)this + 0x395);
}
void* _Script_UMG::MultiLineEditableText::get_OnTextChanged() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_UMG::MultiLineEditableText::get_OnTextCommitted() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Script_UMG::MultiLineEditableText::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MultiLineEditableText");
    return result;
}
void _Script_UMG::MultiLineEditableText::SetText(void* InText) {
    return;
}
void _Script_UMG::MultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
    return;
}
void* _Script_UMG::MultiLineEditableText::GetText() {
    return;
}
