#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "TickFunction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimitiveComponentPostPhysicsTickFunction : public TickFunction {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
