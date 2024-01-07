#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialExpressionFunctionInput;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FunctionExpressionInput {
    _Script_Engine::MaterialExpressionFunctionInput*& get_ExpressionInput();
    void* get_ExpressionInputId();
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
