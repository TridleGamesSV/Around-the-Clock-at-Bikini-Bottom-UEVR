#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionParameter.hpp"
void* _Script_Engine::MaterialExpressionParameter::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionParameter::get_Group() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::MaterialExpressionParameter::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionParameter");
    return result;
}
