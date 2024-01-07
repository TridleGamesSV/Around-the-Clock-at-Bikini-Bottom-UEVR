#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HeaderRowStyle.hpp"
#include "SlateWidgetStyle.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::HeaderRowStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.HeaderRowStyle");
    return result;
}
void* _Script_SlateCore::HeaderRowStyle::get_ColumnStyle() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::HeaderRowStyle::get_LastColumnStyle() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_SlateCore::HeaderRowStyle::get_ForegroundColor() {
    return (void*)((uintptr_t)this + 0x9f8);
}
void* _Script_SlateCore::HeaderRowStyle::get_ColumnSplitterStyle() {
    return (void*)((uintptr_t)this + 0x888);
}
void* _Script_SlateCore::HeaderRowStyle::get_BackgroundBrush() {
    return (void*)((uintptr_t)this + 0x980);
}
