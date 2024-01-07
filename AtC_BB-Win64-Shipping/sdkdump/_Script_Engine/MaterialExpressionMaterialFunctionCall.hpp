#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_Engine {
struct MaterialFunctionInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionMaterialFunctionCall : public MaterialExpression {
    _Script_Engine::MaterialFunctionInterface*& get_MaterialFunction();
    void* get_FunctionInputs();
    void* get_FunctionOutputs();
    void* get_FunctionParameterInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
