#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionCustom.hpp"
void* _Script_Engine::MaterialExpressionCustom::get_Code() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionCustom::get_OutputType() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::MaterialExpressionCustom::get_Description() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::MaterialExpressionCustom::get_Inputs() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionCustom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionCustom");
    return result;
}
