#include "..\FUObjectArray.hpp"
#include "AnimNode_ScaleChainLength.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_InputPose() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_DefaultChainLength() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainStartBone() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ActualAlpha() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_TargetLocation() {
    return (void*)((uintptr_t)this + 0x84);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainEndBone() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_ChainInitialLength() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_Alpha() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_AlphaScaleBias() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::get_bBoneIndicesCached() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::set_bBoneIndicesCached(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_ScaleChainLength::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength");
    return result;
}
