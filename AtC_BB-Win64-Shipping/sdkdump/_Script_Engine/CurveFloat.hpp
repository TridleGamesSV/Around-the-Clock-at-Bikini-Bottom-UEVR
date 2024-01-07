#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveFloat : public CurveBase {
    void* get_FloatCurve();
    bool get_bIsEventCurve();
    void set_bIsEventCurve(bool value);
    static _Script_CoreUObject::Class* static_class();
    float GetFloatValue(float InTime);
}; // Size: 0x28
#pragma pack(pop)
}
