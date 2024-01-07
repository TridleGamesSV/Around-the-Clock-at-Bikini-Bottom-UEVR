#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialInput.hpp"
void* _Script_Engine::MaterialInput::get_InputName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::MaterialInput::get_OutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::MaterialInput::get_MaskB() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_Engine::MaterialInput::get_Mask() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::MaterialInput::get_MaskR() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::MaterialInput::get_MaskG() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::MaterialInput::get_MaskA() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::MaterialInput::get_ExpressionName() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::MaterialInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialInput");
    return result;
}
