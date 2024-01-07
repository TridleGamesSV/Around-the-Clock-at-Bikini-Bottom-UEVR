#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Slider.hpp"
#include "Widget.hpp"
void* _Script_UMG::Slider::get_WidgetStyle() {
    return (void*)((uintptr_t)this + 0x118);
}
float& _Script_UMG::Slider::get_Value() {
    return *(float*)((uintptr_t)this + 0x100);
}
bool _Script_UMG::Slider::get_IndentHandle() {
    return (*(uint8_t*)((uintptr_t)this + 0x32c + 0)) & 1 != 0;
}
void* _Script_UMG::Slider::get_ValueDelegate() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_UMG::Slider::get_Orientation() {
    return (void*)((uintptr_t)this + 0x308);
}
void _Script_UMG::Slider::set_IndentHandle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x32c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_UMG::Slider::get_StepSize() {
    return *(float*)((uintptr_t)this + 0x330);
}
void* _Script_UMG::Slider::get_SliderBarColor() {
    return (void*)((uintptr_t)this + 0x30c);
}
void* _Script_UMG::Slider::get_SliderHandleColor() {
    return (void*)((uintptr_t)this + 0x31c);
}
bool _Script_UMG::Slider::get_Locked() {
    return (*(uint8_t*)((uintptr_t)this + 0x32d + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_Locked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32d + 0);
    *(uint8_t*)((uintptr_t)this + 0x32d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::Slider::get_IsFocusable() {
    return (*(uint8_t*)((uintptr_t)this + 0x334 + 0)) & 1 != 0;
}
void _Script_UMG::Slider::set_IsFocusable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x334 + 0);
    *(uint8_t*)((uintptr_t)this + 0x334 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UMG::Slider::get_OnMouseCaptureBegin() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_UMG::Slider::get_OnMouseCaptureEnd() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_UMG::Slider::get_OnControllerCaptureBegin() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_UMG::Slider::get_OnControllerCaptureEnd() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_UMG::Slider::get_OnValueChanged() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Script_UMG::Slider::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Slider");
    return result;
}
void _Script_UMG::Slider::SetValue(float InValue) {
    return;
}
void _Script_UMG::Slider::SetStepSize(float InValue) {
    return;
}
void _Script_UMG::Slider::SetIndentHandle(bool InValue) {
    return;
}
void _Script_UMG::Slider::SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_UMG::Slider::SetSliderBarColor(_Script_CoreUObject::LinearColor InValue) {
    return;
}
void _Script_UMG::Slider::SetLocked(bool InValue) {
    return;
}
float _Script_UMG::Slider::GetValue() {
    return;
}
