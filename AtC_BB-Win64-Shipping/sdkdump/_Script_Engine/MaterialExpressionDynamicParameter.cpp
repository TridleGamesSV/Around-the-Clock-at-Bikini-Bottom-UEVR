#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionDynamicParameter.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionDynamicParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionDynamicParameter");
    return result;
}
void* _Script_Engine::MaterialExpressionDynamicParameter::get_ParamNames() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionDynamicParameter::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x70);
}
