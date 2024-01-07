#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialExpression.hpp"
#include "MaterialExpressionTime.hpp"
bool _Script_Engine::MaterialExpressionTime::get_bOverride_Period() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
bool _Script_Engine::MaterialExpressionTime::get_bIgnorePause() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::MaterialExpressionTime::set_bIgnorePause(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MaterialExpressionTime::set_bOverride_Period(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::MaterialExpressionTime::get_Period() {
    return *(float*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialExpressionTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpressionTime");
    return result;
}
