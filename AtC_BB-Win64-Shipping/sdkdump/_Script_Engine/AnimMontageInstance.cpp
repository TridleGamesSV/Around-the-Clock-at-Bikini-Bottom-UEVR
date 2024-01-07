#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimMontage.hpp"
#include "AnimMontageInstance.hpp"
_Script_Engine::AnimMontage*& _Script_Engine::AnimMontageInstance::get_Montage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x0);
}
bool _Script_Engine::AnimMontageInstance::get_bPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_Engine::AnimMontageInstance::set_bPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::AnimMontageInstance::get_ActiveStateBranchingPoints() {
    return (void*)((uintptr_t)this + 0x180);
}
float& _Script_Engine::AnimMontageInstance::get_DefaultBlendTimeMultiplier() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::AnimMontageInstance::get_PrevSections() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::AnimMontageInstance::get_NextSections() {
    return (void*)((uintptr_t)this + 0x150);
}
float& _Script_Engine::AnimMontageInstance::get_Position() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Script_Engine::AnimMontageInstance::get_PlayRate() {
    return *(float*)((uintptr_t)this + 0x194);
}
void* _Script_Engine::AnimMontageInstance::get_Blend() {
    return (void*)((uintptr_t)this + 0x198);
}
int32_t& _Script_Engine::AnimMontageInstance::get_DisableRootMotionCount() {
    return *(int32_t*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimMontageInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimMontageInstance");
    return result;
}
