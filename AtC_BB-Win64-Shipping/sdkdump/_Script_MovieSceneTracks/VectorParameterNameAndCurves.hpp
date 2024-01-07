#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct VectorParameterNameAndCurves {
    void* get_ParameterName();
    int32_t& get_Index();
    void* get_XCurve();
    void* get_YCurve();
    void* get_ZCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
