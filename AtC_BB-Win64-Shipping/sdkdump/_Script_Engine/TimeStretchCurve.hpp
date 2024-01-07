#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TimeStretchCurve {
    float& get_SamplingRate();
    float& get_CurveValueMinPrecision();
    void* get_Markers();
    float& get_Sum_dT_i_by_C_i();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
