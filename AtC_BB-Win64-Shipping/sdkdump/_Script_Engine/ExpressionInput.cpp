#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpressionInput.hpp"
int32_t& _Script_Engine::ExpressionInput::get_OutputIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ExpressionInput::get_Mask() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ExpressionInput::get_InputName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::ExpressionInput::get_MaskR() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::ExpressionInput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExpressionInput");
    return result;
}
int32_t& _Script_Engine::ExpressionInput::get_MaskA() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::ExpressionInput::get_MaskG() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Engine::ExpressionInput::get_MaskB() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::ExpressionInput::get_ExpressionName() {
    return (void*)((uintptr_t)this + 0x28);
}
