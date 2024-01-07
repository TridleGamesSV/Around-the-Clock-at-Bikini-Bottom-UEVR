#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ExpressionOutput.hpp"
void* _Script_Engine::ExpressionOutput::get_OutputName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::ExpressionOutput::get_Mask() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::ExpressionOutput::get_MaskR() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
int32_t& _Script_Engine::ExpressionOutput::get_MaskG() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Engine::ExpressionOutput::get_MaskB() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
int32_t& _Script_Engine::ExpressionOutput::get_MaskA() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::ExpressionOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ExpressionOutput");
    return result;
}
