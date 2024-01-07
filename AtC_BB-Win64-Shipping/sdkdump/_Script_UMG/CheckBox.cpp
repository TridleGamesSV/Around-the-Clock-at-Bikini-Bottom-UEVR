#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_SlateCore\SlateWidgetStyleAsset.hpp"
#include "CheckBox.hpp"
#include "ContentWidget.hpp"
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_CheckedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x640);
}
void* _Script_UMG::CheckBox::get_CheckedState() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_UMG::CheckBox::get_CheckedStateDelegate() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_UMG::CheckBox::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_SlateCore::SlateWidgetStyleAsset*& _Script_UMG::CheckBox::get_Style() {
    return *(_Script_SlateCore::SlateWidgetStyleAsset**)((uintptr_t)this + 0x620);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UncheckedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x628);
}
_Script_CoreUObject::Class* _Script_UMG::CheckBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.CheckBox");
    return result;
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UncheckedPressedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x638);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_CheckedHoveredImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x648);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UncheckedHoveredImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x630);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_CheckedPressedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x650);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UndeterminedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x658);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UndeterminedHoveredImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x660);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CheckBox::get_UndeterminedPressedImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x668);
}
void* _Script_UMG::CheckBox::get_HorizontalAlignment() {
    return (void*)((uintptr_t)this + 0x670);
}
void* _Script_UMG::CheckBox::get_Padding() {
    return (void*)((uintptr_t)this + 0x674);
}
void* _Script_UMG::CheckBox::get_BorderBackgroundColor() {
    return (void*)((uintptr_t)this + 0x688);
}
bool _Script_UMG::CheckBox::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b0 + 0)) & 1 != 0;
}
void _Script_UMG::CheckBox::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::CheckBox::get_OnCheckStateChanged() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void _Script_UMG::CheckBox::SetIsChecked(bool InIsChecked) {
    return;
}
void _Script_UMG::CheckBox::SetCheckedState(void* InCheckedState) {
    return;
}
bool _Script_UMG::CheckBox::IsPressed() {
    return;
}
bool _Script_UMG::CheckBox::IsChecked() {
    return;
}
void* _Script_UMG::CheckBox::GetCheckedState() {
    return;
}
