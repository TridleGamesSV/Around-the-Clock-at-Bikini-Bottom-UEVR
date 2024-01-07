#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlateWidgetStyle.hpp"
#include "SliderStyle.hpp"
void* _Script_SlateCore::SliderStyle::get_NormalThumbImage() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_SlateCore::SliderStyle::get_NormalBarImage() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SlateCore::SliderStyle::get_DisabledBarImage() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_SlateCore::SliderStyle::get_BarThickness() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
void* _Script_SlateCore::SliderStyle::get_DisabledThumbImage() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_SlateCore::SliderStyle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SliderStyle");
    return result;
}
