#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionFresnel.hpp"
void* _Script_Engine::MaterialExpressionFresnel::get_ExponentIn() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::MaterialExpressionFresnel::get_Exponent() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionFresnel::get_BaseReflectFractionIn() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::MaterialExpressionFresnel::get_BaseReflectFraction() {
    return *(float*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::MaterialExpressionFresnel::get_Normal() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionFresnel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionFresnel");
    return result;
}
