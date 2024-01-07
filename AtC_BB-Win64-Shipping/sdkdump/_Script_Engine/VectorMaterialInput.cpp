#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInput.hpp"
#include "VectorMaterialInput.hpp"
void* _Script_Engine::VectorMaterialInput::get_Constant() {
    return (void*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::VectorMaterialInput::get_UseConstant() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_Engine::VectorMaterialInput::set_UseConstant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::VectorMaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VectorMaterialInput");
    return result;
}
