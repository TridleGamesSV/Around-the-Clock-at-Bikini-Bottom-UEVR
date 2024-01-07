#include "..\FUObjectArray.hpp"
#include "AnimNode_CopyBoneDelta.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyScale() {
    return (*(uint8_t*)((uintptr_t)this + 0xa2 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_SourceBone() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_TargetBone() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_TranslationMultiplier() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_bCopyRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::set_bCopyScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_CopyMode() {
    return (void*)((uintptr_t)this + 0xa3);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_RotationMultiplier() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::get_ScaleMultiplier() {
    return *(float*)((uintptr_t)this + 0xac);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_CopyBoneDelta::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta");
    return result;
}
