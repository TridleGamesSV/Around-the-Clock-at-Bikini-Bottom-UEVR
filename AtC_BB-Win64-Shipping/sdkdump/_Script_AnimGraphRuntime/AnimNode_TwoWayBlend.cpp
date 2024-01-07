#include "..\FUObjectArray.hpp"
#include "AnimNode_TwoWayBlend.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_A() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_InternalBlendAlpha() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_B() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x60);
}
void _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::set_bAIsRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x64);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_bBIsRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_bAIsRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::set_bBIsRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::get_bResetChildOnActivation() {
    return (*(uint8_t*)((uintptr_t)this + 0x72 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::set_bResetChildOnActivation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x72 + 0);
    *(uint8_t*)((uintptr_t)this + 0x72 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwoWayBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend");
    return result;
}
