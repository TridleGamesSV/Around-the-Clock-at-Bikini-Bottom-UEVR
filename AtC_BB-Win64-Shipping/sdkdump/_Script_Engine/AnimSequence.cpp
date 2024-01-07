#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSequence.hpp"
#include "AnimSequenceBase.hpp"
int32_t& _Script_Engine::AnimSequence::get_EncodingPkgVersion() {
    return *(int32_t*)((uintptr_t)this + 0x15c);
}
int32_t& _Script_Engine::AnimSequence::get_NumFrames() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::AnimSequence::get_TrackToSkeletonMapTable() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::AnimSequence::get_AdditiveAnimType() {
    return (void*)((uintptr_t)this + 0x14c);
}
void _Script_Engine::AnimSequence::set_bRootMotionSettingsCopiedFromMontage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16c + 0);
    *(uint8_t*)((uintptr_t)this + 0x16c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimSequence::get_RefPoseType() {
    return (void*)((uintptr_t)this + 0x14d);
}
_Script_Engine::AnimSequence*& _Script_Engine::AnimSequence::get_RefPoseSeq() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x150);
}
int32_t& _Script_Engine::AnimSequence::get_RefFrameIndex() {
    return *(int32_t*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::AnimSequence::get_RetargetSource() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::AnimSequence::get_Interpolation() {
    return (void*)((uintptr_t)this + 0x168);
}
bool _Script_Engine::AnimSequence::get_bEnableRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x169 + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bEnableRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x169 + 0);
    *(uint8_t*)((uintptr_t)this + 0x169 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimSequence::get_RootMotionRootLock() {
    return (void*)((uintptr_t)this + 0x16a);
}
bool _Script_Engine::AnimSequence::get_bForceRootLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x16b + 0)) & 1 != 0;
}
void _Script_Engine::AnimSequence::set_bForceRootLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16b + 0);
    *(uint8_t*)((uintptr_t)this + 0x16b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::AnimSequence::get_bRootMotionSettingsCopiedFromMontage() {
    return (*(uint8_t*)((uintptr_t)this + 0x16c + 0)) & 1 != 0;
}
void* _Script_Engine::AnimSequence::get_AuthoredSyncMarkers() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimSequence");
    return result;
}
