#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionMax.hpp"
void* _Script_Engine::MaterialExpressionMax::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionMax::get_B() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MaterialExpressionMax::get_ConstA() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::MaterialExpressionMax::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xc4);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionMax::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionMax");
    return result;
}
