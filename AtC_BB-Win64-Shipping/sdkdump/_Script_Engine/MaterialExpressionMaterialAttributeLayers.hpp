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
struct MaterialExpressionMaterialAttributeLayers : public MaterialExpression {
    void* get_ParameterName();
    void* get_ExpressionGUID();
    void* get_Input();
    void* get_DefaultLayers();
    void* get_LayerCallers();
    void* get_BlendCallers();
    bool get_bIsLayerGraphBuilt();
    void set_bIsLayerGraphBuilt(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
