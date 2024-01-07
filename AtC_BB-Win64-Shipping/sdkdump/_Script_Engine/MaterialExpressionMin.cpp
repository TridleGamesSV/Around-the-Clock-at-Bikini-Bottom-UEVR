#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMin.hpp"
float& _Script_Engine::MaterialExpressionMin::get_ConstA() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionMin::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMin");
    return result;
}
void* _Script_Engine::MaterialExpressionMin::get_B() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MaterialExpressionMin::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xc4);
}
