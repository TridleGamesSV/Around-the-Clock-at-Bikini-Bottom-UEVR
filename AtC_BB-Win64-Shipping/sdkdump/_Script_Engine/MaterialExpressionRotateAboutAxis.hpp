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
struct MaterialExpressionRotateAboutAxis : public MaterialExpression {
    void* get_NormalizedRotationAxis();
    void* get_RotationAngle();
    void* get_PivotPoint();
    void* get_Position();
    float& get_Period();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
