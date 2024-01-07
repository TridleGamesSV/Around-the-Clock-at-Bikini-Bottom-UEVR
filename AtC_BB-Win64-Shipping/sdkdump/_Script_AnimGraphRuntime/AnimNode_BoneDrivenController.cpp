#include "..\FUObjectArray.hpp"
#include "AnimNode_BoneDrivenController.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_SourceBone() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_SourceComponent() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_RangeMax() {
    return *(float*)((uintptr_t)this + 0xa4);
}
_Script_Engine::CurveFloat*& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_DrivingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x90);
}
float& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_Multiplier() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_RangeMin() {
    return *(float*)((uintptr_t)this + 0xa0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bUseRange() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bUseRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_RemappedMin() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_RemappedMax() {
    return *(float*)((uintptr_t)this + 0xac);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_DestinationMode() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_ParameterName() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_TargetBone() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_TargetComponent() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetTranslationX() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetTranslationX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetTranslationY() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 2 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetTranslationY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetRotationY() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 16 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetTranslationZ() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 4 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetTranslationZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetRotationX() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 8 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetRotationX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetRotationY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetRotationZ() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 32 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetRotationZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetScaleX() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 64 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetScaleX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetScaleY() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 128 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetScaleY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_bAffectTargetScaleZ() {
    return (*(uint8_t*)((uintptr_t)this + 0xdd + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::set_bAffectTargetScaleZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdd + 0);
    *(uint8_t*)((uintptr_t)this + 0xdd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::get_ModificationMode() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BoneDrivenController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController");
    return result;
}
