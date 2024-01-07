#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_Trail.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_TrailRelaxation() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_BaseJoint() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_TrailBone() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bInvertChainBoneAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8d + 0);
    *(uint8_t*)((uintptr_t)this + 0x8d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_Trail::get_ChainLength() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_ChainBoneAxis() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bInvertChainBoneAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x8d + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_TrailRelaxationSpeed() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bLimitStretch() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bLimitStretch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_Trail::get_StretchLimit() {
    return *(float*)((uintptr_t)this + 0x114);
}
void* _Script_AnimGraphRuntime::AnimNode_Trail::get_FakeVelocity() {
    return (void*)((uintptr_t)this + 0x118);
}
bool _Script_AnimGraphRuntime::AnimNode_Trail::get_bActorSpaceFakeVel() {
    return (*(uint8_t*)((uintptr_t)this + 0x124 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_Trail::set_bActorSpaceFakeVel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x124 + 0);
    *(uint8_t*)((uintptr_t)this + 0x124 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_Trail::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_Trail");
    return result;
}
