#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_X() {
    return *(float*)((uintptr_t)this + 0x58);
}
_Script_Engine::BlendSpaceBase*& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_BlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x70);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_Z() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_Y() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_StartPosition() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_bResetPlayTimeWhenBlendSpaceChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::set_bResetPlayTimeWhenBlendSpaceChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_BlendFilter() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_BlendSampleDataCache() {
    return (void*)((uintptr_t)this + 0x110);
}
_Script_Engine::BlendSpaceBase*& _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::get_PreviousBlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendSpacePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer");
    return result;
}
