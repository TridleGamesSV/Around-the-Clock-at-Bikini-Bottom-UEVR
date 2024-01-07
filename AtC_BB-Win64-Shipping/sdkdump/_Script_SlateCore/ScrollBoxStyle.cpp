#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScrollBoxStyle.hpp"
#include "SlateWidgetStyle.hpp"
void* _Script_SlateCore::ScrollBoxStyle::get_TopShadowBrush() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::ScrollBoxStyle::get_BottomShadowBrush() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SlateCore::ScrollBoxStyle::get_LeftShadowBrush() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::ScrollBoxStyle::get_RightShadowBrush() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_SlateCore::ScrollBoxStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.ScrollBoxStyle");
    return result;
}
