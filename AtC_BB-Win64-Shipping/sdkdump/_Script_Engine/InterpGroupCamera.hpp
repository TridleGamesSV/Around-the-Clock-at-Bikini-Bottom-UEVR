#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpGroup.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpGroupCamera : public InterpGroup {
    _Script_Engine::CameraAnim*& get_CameraAnimInst();
    float& get_CompressTolerance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
