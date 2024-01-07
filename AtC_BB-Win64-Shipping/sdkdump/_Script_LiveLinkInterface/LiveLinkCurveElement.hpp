#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkCurveElement {
    void* get_CurveName();
    float& get_CurveValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
