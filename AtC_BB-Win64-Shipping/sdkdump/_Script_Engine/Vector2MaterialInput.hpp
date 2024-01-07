#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialInput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Vector2MaterialInput : public MaterialInput {
    bool get_UseConstant();
    void set_UseConstant(bool value);
    float& get_ConstantX();
    float& get_ConstantY();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
