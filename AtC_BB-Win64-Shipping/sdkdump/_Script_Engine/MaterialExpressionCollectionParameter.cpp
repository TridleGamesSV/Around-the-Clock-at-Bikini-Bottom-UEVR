#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionCollectionParameter.hpp"
#include "MaterialParameterCollection.hpp"
_Script_Engine::MaterialParameterCollection*& _Script_Engine::MaterialExpressionCollectionParameter::get_Collection() {
    return *(_Script_Engine::MaterialParameterCollection**)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionCollectionParameter::get_ParameterName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::MaterialExpressionCollectionParameter::get_ParameterId() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionCollectionParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionCollectionParameter");
    return result;
}
