#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialExpression.hpp"
#include "MaterialExpressionLandscapeLayerWeight.hpp"
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_Base() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ConstBase() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_Layer() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_ParameterName() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Landscape::MaterialExpressionLandscapeLayerWeight::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight");
    return result;
}
float& _Script_Landscape::MaterialExpressionLandscapeLayerWeight::get_PreviewWeight() {
    return *(float*)((uintptr_t)this + 0xc8);
}
