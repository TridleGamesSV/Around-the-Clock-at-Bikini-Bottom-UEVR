#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompositeBase.hpp"
#include "AnimMontage.hpp"
float& _Script_Engine::AnimMontage::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0xd8);
}
void* _Script_Engine::AnimMontage::get_BlendIn() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::AnimMontage::get_BlendOut() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::AnimMontage::get_MarkerData() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_Engine::AnimMontage::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x118);
}
float& _Script_Engine::AnimMontage::get_BlendOutTriggerTime() {
    return *(float*)((uintptr_t)this + 0x11c);
}
void* _Script_Engine::AnimMontage::get_SyncGroup() {
    return (void*)((uintptr_t)this + 0x120);
}
int32_t& _Script_Engine::AnimMontage::get_SyncSlotIndex() {
    return *(int32_t*)((uintptr_t)this + 0x128);
}
void* _Script_Engine::AnimMontage::get_BranchingPointMarkers() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::AnimMontage::get_CompositeSections() {
    return (void*)((uintptr_t)this + 0x150);
}
_Script_CoreUObject::Class* _Script_Engine::AnimMontage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimMontage");
    return result;
}
void* _Script_Engine::AnimMontage::get_SlotAnimTracks() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::AnimMontage::get_BranchingPoints() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_Engine::AnimMontage::get_bEnableRootMotionTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void _Script_Engine::AnimMontage::set_bEnableRootMotionTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimMontage::get_bEnableRootMotionRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x181 + 0)) & 1 != 0;
}
void _Script_Engine::AnimMontage::set_bEnableRootMotionRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x181 + 0);
    *(uint8_t*)((uintptr_t)this + 0x181 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimMontage::get_RootMotionRootLock() {
    return (void*)((uintptr_t)this + 0x182);
}
void* _Script_Engine::AnimMontage::get_BranchingPointStateNotifyIndices() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_Engine::AnimMontage::get_TimeStretchCurve() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_Engine::AnimMontage::get_TimeStretchCurveName() {
    return (void*)((uintptr_t)this + 0x1d0);
}
