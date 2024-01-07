#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionSphereMask : public MaterialExpression {
    void* get_A();
    void* get_B();
    void* get_Radius();
    void* get_Hardness();
    float& get_AttenuationRadius();
    float& get_HardnessPercent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
