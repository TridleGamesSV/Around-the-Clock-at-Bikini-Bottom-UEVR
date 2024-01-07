#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "CurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveLinearColor : public CurveBase {
    void* get_FloatCurves();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::LinearColor GetLinearColorValue(float InTime);
}; // Size: 0x28
#pragma pack(pop)
}
