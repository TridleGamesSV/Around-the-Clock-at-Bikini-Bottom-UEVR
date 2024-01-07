#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct MaterialExpressionARKitPassthroughCamera : public _Script_Engine::MaterialExpression {
    void* get_Coordinates();
    void* get_ConstCoordinate();
    void* get_TextureType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
