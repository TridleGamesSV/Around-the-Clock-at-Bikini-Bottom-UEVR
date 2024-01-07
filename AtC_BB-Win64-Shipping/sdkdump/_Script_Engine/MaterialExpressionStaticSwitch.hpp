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
struct MaterialExpressionStaticSwitch : public MaterialExpression {
    bool get_DefaultValue();
    void set_DefaultValue(bool value);
    void* get_A();
    void* get_B();
    void* get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
