#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionClamp.hpp"
void* _Script_Engine::MaterialExpressionClamp::get_Input() {
    return (void*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::MaterialExpressionClamp::get_MaxDefault() {
    return *(float*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::MaterialExpressionClamp::get_Min() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::MaterialExpressionClamp::get_Max() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::MaterialExpressionClamp::get_MinDefault() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::MaterialExpressionClamp::get_ClampMode() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionClamp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionClamp");
    return result;
}
