#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DockTabStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::DockTabStyle::get_CloseButtonStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::DockTabStyle::get_NormalBrush() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_SlateCore::DockTabStyle::get_ActiveBrush() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_SlateCore::DockTabStyle::get_ColorOverlayTabBrush() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_SlateCore::DockTabStyle::get_ColorOverlayIconBrush() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_SlateCore::DockTabStyle::get_ContentAreaBrush() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Script_SlateCore::DockTabStyle::get_ForegroundBrush() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_SlateCore::DockTabStyle::get_HoveredBrush() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_SlateCore::DockTabStyle::get_TabWellBrush() {
    return (void*)((uintptr_t)this + 0x588);
}
void* _Script_SlateCore::DockTabStyle::get_TabPadding() {
    return (void*)((uintptr_t)this + 0x600);
}
float& _Script_SlateCore::DockTabStyle::get_OverlapWidth() {
    return *(float*)((uintptr_t)this + 0x610);
}
void* _Script_SlateCore::DockTabStyle::get_FlashColor() {
    return (void*)((uintptr_t)this + 0x618);
}
_Script_CoreUObject::Class* _Script_SlateCore::DockTabStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.DockTabStyle");
    return result;
}
