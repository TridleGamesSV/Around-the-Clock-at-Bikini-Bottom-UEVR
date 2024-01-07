#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ButtonStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ButtonStyle::get_Normal() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ButtonStyle::get_Hovered() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SlateCore::ButtonStyle::get_PressedPadding() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void* _Script_SlateCore::ButtonStyle::get_Pressed() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::ButtonStyle::get_Disabled() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SlateCore::ButtonStyle::get_NormalPadding() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SlateCore::ButtonStyle::get_PressedSlateSound() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_SlateCore::ButtonStyle::get_HoveredSlateSound() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_CoreUObject::Class* _Script_SlateCore::ButtonStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ButtonStyle");
    return result;
}
