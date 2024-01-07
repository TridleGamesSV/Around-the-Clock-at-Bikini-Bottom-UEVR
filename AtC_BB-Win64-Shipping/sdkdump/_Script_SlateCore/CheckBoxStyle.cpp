#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CheckBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::CheckBoxStyle::get_CheckBoxType() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedPressedImage() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedImage() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedImage() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedHoveredImage() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SlateCore::CheckBoxStyle::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedPressedImage() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedSlateSound() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedImage() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_SlateCore::CheckBoxStyle::get_CheckedHoveredImage() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedHoveredImage() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_SlateCore::CheckBoxStyle::get_UndeterminedPressedImage() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_SlateCore::CheckBoxStyle::get_Padding() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_SlateCore::CheckBoxStyle::get_BorderBackgroundColor() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_SlateCore::CheckBoxStyle::get_UncheckedSlateSound() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Script_SlateCore::CheckBoxStyle::get_HoveredSlateSound() {
    return (void*)((uintptr_t)this + 0x4d8);
}
_Script_CoreUObject::Class* _Script_SlateCore::CheckBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.CheckBoxStyle");
    return result;
}
