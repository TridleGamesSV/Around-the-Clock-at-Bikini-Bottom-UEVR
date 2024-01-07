#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInput.hpp"
#include "Vector2MaterialInput.hpp"
float& _Script_Engine::Vector2MaterialInput::get_ConstantX() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::Vector2MaterialInput::get_UseConstant() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::Vector2MaterialInput::set_UseConstant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::Vector2MaterialInput::get_ConstantY() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::Vector2MaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Vector2MaterialInput");
    return result;
}
