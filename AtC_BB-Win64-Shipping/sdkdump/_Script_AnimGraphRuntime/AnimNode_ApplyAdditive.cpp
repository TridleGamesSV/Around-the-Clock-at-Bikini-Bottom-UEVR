#include "..\FUObjectArray.hpp"
#include "AnimNode_ApplyAdditive.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Base() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive");
    return result;
}
int32_t& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_LODThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Additive() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_ApplyAdditive::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x64);
}
