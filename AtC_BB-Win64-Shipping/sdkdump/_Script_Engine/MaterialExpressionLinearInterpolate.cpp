#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionLinearInterpolate.hpp"
void* _Script_Engine::MaterialExpressionLinearInterpolate::get_A() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionLinearInterpolate::get_B() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::MaterialExpressionLinearInterpolate::get_ConstB() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::MaterialExpressionLinearInterpolate::get_Alpha() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::MaterialExpressionLinearInterpolate::get_ConstA() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::MaterialExpressionLinearInterpolate::get_ConstAlpha() {
    return *(float*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionLinearInterpolate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionLinearInterpolate");
    return result;
}
