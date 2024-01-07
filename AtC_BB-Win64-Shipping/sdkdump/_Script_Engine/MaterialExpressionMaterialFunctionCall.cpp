#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMaterialFunctionCall.hpp"
#include "MaterialFunctionInterface.hpp"
void* _Script_Engine::MaterialExpressionMaterialFunctionCall::get_FunctionOutputs() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_Engine::MaterialFunctionInterface*& _Script_Engine::MaterialExpressionMaterialFunctionCall::get_MaterialFunction() {
    return *(_Script_Engine::MaterialFunctionInterface**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMaterialFunctionCall::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMaterialFunctionCall");
    return result;
}
void* _Script_Engine::MaterialExpressionMaterialFunctionCall::get_FunctionInputs() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionMaterialFunctionCall::get_FunctionParameterInfo() {
    return (void*)((uintptr_t)this + 0x88);
}
