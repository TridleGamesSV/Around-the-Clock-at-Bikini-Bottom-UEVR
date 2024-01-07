#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionSobol.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionSobol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionSobol");
    return result;
}
void* _Script_Engine::MaterialExpressionSobol::get_Cell() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::MaterialExpressionSobol::get_Index() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionSobol::get_Seed() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::MaterialExpressionSobol::get_ConstIndex() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_Engine::MaterialExpressionSobol::get_ConstSeed() {
    return (void*)((uintptr_t)this + 0xf4);
}
