#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSubtract.hpp"
void* _Script_Engine::MaterialExpressionSubtract::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionSubtract::get_B() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MaterialExpressionSubtract::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xc4);
}
float& _Script_Engine::MaterialExpressionSubtract::get_ConstA() {
    return *(float*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSubtract::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSubtract");
    return result;
}
