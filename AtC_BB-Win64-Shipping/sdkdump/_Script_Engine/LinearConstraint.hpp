#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ConstraintBaseParams.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LinearConstraint : public ConstraintBaseParams {
    float& get_Limit();
    void* get_XMotion();
    void* get_YMotion();
    void* get_ZMotion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
