#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScrollBarStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ScrollBarStyle::get_HorizontalBackgroundImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ScrollBarStyle::get_HoveredThumbImage() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_SlateCore::ScrollBarStyle::get_VerticalBackgroundImage() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SlateCore::ScrollBarStyle::get_HorizontalTopSlotImage() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SlateCore::ScrollBarStyle::get_VerticalTopSlotImage() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::ScrollBarStyle::get_VerticalBottomSlotImage() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SlateCore::ScrollBarStyle::get_HorizontalBottomSlotImage() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Script_SlateCore::ScrollBarStyle::get_NormalThumbImage() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Script_SlateCore::ScrollBarStyle::get_DraggedThumbImage() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_SlateCore::ScrollBarStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ScrollBarStyle");
    return result;
}
