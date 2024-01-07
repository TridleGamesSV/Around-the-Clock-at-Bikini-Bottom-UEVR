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
struct MaterialExpressionPower : public MaterialExpression {
    void* get_Base();
    void* get_Exponent();
    float& get_ConstExponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
