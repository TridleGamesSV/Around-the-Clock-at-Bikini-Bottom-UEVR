#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackLinearColorBase : public InterpTrack {
    void* get_LinearColorTrack();
    float& get_CurveTension();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
