#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveBase : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    void GetValueRange(float& MinValue, float& MaxValue);
    void GetTimeRange(float& MinTime, float& MaxTime);
}; // Size: 0x28
#pragma pack(pop)
}
