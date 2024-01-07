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
struct MaterialExpressionDepthFade : public MaterialExpression {
    void* get_InOpacity();
    void* get_FadeDistance();
    float& get_OpacityDefault();
    float& get_FadeDistanceDefault();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
