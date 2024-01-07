#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "WindowStyle.hpp"
void* _Script_SlateCore::WindowStyle::get_InactiveTitleBrush() {
    return (void*)((uintptr_t)this + 0xb28);
}
void* _Script_SlateCore::WindowStyle::get_CloseButtonStyle() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Script_SlateCore::WindowStyle::get_MinimizeButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::WindowStyle::get_ActiveTitleBrush() {
    return (void*)((uintptr_t)this + 0xab0);
}
void* _Script_SlateCore::WindowStyle::get_MaximizeButtonStyle() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_SlateCore::WindowStyle::get_RestoreButtonStyle() {
    return (void*)((uintptr_t)this + 0x478);
}
void* _Script_SlateCore::WindowStyle::get_TitleTextStyle() {
    return (void*)((uintptr_t)this + 0x8e8);
}
void* _Script_SlateCore::WindowStyle::get_FlashTitleBrush() {
    return (void*)((uintptr_t)this + 0xba0);
}
void* _Script_SlateCore::WindowStyle::get_BackgroundColor() {
    return (void*)((uintptr_t)this + 0xc18);
}
void* _Script_SlateCore::WindowStyle::get_OutlineBrush() {
    return (void*)((uintptr_t)this + 0xc40);
}
void* _Script_SlateCore::WindowStyle::get_OutlineColor() {
    return (void*)((uintptr_t)this + 0xcb8);
}
void* _Script_SlateCore::WindowStyle::get_BorderBrush() {
    return (void*)((uintptr_t)this + 0xce0);
}
void* _Script_SlateCore::WindowStyle::get_BackgroundBrush() {
    return (void*)((uintptr_t)this + 0xd58);
}
void* _Script_SlateCore::WindowStyle::get_ChildBackgroundBrush() {
    return (void*)((uintptr_t)this + 0xdd0);
}
_Script_CoreUObject::Class* _Script_SlateCore::WindowStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.WindowStyle");
    return result;
}
