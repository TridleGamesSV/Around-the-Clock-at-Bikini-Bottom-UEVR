#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMaterialAttributeLayers.hpp"
void _Script_Engine::MaterialExpressionMaterialAttributeLayers::set_bIsLayerGraphBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_DefaultLayers() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_BlendCallers() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_LayerCallers() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_Input() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::MaterialExpressionMaterialAttributeLayers::get_bIsLayerGraphBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMaterialAttributeLayers::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMaterialAttributeLayers");
    return result;
}
