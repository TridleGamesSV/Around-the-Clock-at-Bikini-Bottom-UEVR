#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Slider : public Widget {
    float& get_Value();
    void* get_ValueDelegate();
    void* get_WidgetStyle();
    void* get_Orientation();
    void* get_SliderBarColor();
    void* get_SliderHandleColor();
    bool get_IndentHandle();
    void set_IndentHandle(bool value);
    bool get_Locked();
    void set_Locked(bool value);
    float& get_StepSize();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnMouseCaptureBegin();
    void* get_OnMouseCaptureEnd();
    void* get_OnControllerCaptureBegin();
    void* get_OnControllerCaptureEnd();
    void* get_OnValueChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue);
    void SetSliderBarColor(_Script_CoreUObject::LinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
}; // Size: 0x28
#pragma pack(pop)
}
