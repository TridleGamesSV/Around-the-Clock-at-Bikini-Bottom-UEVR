#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "CameraActor.hpp"
#include "CameraAnim.hpp"
#include "CameraAnimInst.hpp"
#include "CameraModifier.hpp"
#include "CameraModifier_CameraShake.hpp"
#include "CameraShake.hpp"
#include "EmitterCameraLensEffectBase.hpp"
#include "PlayerCameraManager.hpp"
#include "PlayerController.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::PlayerCameraManager::get_ViewYawMax() {
    return *(float*)((uintptr_t)this + 0x1ac8);
}
void* _Script_Engine::PlayerCameraManager::get_ViewTarget() {
    return (void*)((uintptr_t)this + 0xe90);
}
float& _Script_Engine::PlayerCameraManager::get_DefaultAspectRatio() {
    return *(float*)((uintptr_t)this + 0x340);
}
_Script_CoreUObject::Vector _Script_Engine::PlayerCameraManager::GetCameraLocation() {
    return;
}
void _Script_Engine::PlayerCameraManager::RemoveCameraLensEffect(_Script_Engine::EmitterCameraLensEffectBase* Emitter) {
    return;
}
float& _Script_Engine::PlayerCameraManager::get_DefaultOrthoWidth() {
    return *(float*)((uintptr_t)this + 0x338);
}
_Script_Engine::PlayerController*& _Script_Engine::PlayerCameraManager::get_PCOwner() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x318);
}
void* _Script_Engine::PlayerCameraManager::get_PostProcessBlendCache() {
    return (void*)((uintptr_t)this + 0x1a70);
}
_Script_Engine::SceneComponent*& _Script_Engine::PlayerCameraManager::get_TransformComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
float& _Script_Engine::PlayerCameraManager::get_ViewPitchMin() {
    return *(float*)((uintptr_t)this + 0x1abc);
}
void* _Script_Engine::PlayerCameraManager::get_PendingViewTarget() {
    return (void*)((uintptr_t)this + 0x1420);
}
float& _Script_Engine::PlayerCameraManager::get_DefaultFOV() {
    return *(float*)((uintptr_t)this + 0x330);
}
bool _Script_Engine::PlayerCameraManager::BlueprintUpdateCamera(_Script_Engine::Actor* CameraTarget, _Script_CoreUObject::Vector& NewCameraLocation, _Script_CoreUObject::Rotator& NewCameraRotation, float& NewCameraFOV) {
    return;
}
void _Script_Engine::PlayerCameraManager::StopAllInstancesOfCameraAnim(_Script_Engine::CameraAnim* Anim, bool bImmediate) {
    return;
}
void* _Script_Engine::PlayerCameraManager::get_CameraCache() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Script_Engine::PlayerCameraManager::ClearCameraLensEffects() {
    return;
}
void* _Script_Engine::PlayerCameraManager::get_LastFrameCameraCache() {
    return (void*)((uintptr_t)this + 0x910);
}
void _Script_Engine::PlayerCameraManager::StopAllInstancesOfCameraShake(void* Shake, bool bImmediately) {
    return;
}
void* _Script_Engine::PlayerCameraManager::get_ModifierList() {
    return (void*)((uintptr_t)this + 0x19c8);
}
void* _Script_Engine::PlayerCameraManager::get_DefaultModifiers() {
    return (void*)((uintptr_t)this + 0x19d8);
}
float& _Script_Engine::PlayerCameraManager::get_FreeCamDistance() {
    return *(float*)((uintptr_t)this + 0x19e8);
}
void* _Script_Engine::PlayerCameraManager::get_FreeCamOffset() {
    return (void*)((uintptr_t)this + 0x19ec);
}
void _Script_Engine::PlayerCameraManager::set_bIsOrthographic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PlayerCameraManager::get_ViewTargetOffset() {
    return (void*)((uintptr_t)this + 0x19f8);
}
void* _Script_Engine::PlayerCameraManager::get_CameraLensEffects() {
    return (void*)((uintptr_t)this + 0x1a18);
}
_Script_Engine::CameraModifier_CameraShake*& _Script_Engine::PlayerCameraManager::get_CachedCameraShakeMod() {
    return *(_Script_Engine::CameraModifier_CameraShake**)((uintptr_t)this + 0x1a28);
}
float& _Script_Engine::PlayerCameraManager::get_ViewRollMax() {
    return *(float*)((uintptr_t)this + 0x1ad0);
}
_Script_Engine::CameraAnimInst*& _Script_Engine::PlayerCameraManager::get_AnimInstPool() {
    return *(_Script_Engine::CameraAnimInst**)((uintptr_t)this + 0x1a30);
}
void _Script_Engine::PlayerCameraManager::OnPhotographyMultiPartCaptureStart() {
    return;
}
void* _Script_Engine::PlayerCameraManager::get_ActiveAnims() {
    return (void*)((uintptr_t)this + 0x1a90);
}
void* _Script_Engine::PlayerCameraManager::get_FreeAnims() {
    return (void*)((uintptr_t)this + 0x1aa0);
}
_Script_Engine::CameraActor*& _Script_Engine::PlayerCameraManager::get_AnimCameraActor() {
    return *(_Script_Engine::CameraActor**)((uintptr_t)this + 0x1ab0);
}
_Script_CoreUObject::Rotator _Script_Engine::PlayerCameraManager::GetCameraRotation() {
    return;
}
bool _Script_Engine::PlayerCameraManager::get_bIsOrthographic() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab8 + 0)) & 1 != 0;
}
_Script_Engine::CameraShake* _Script_Engine::PlayerCameraManager::PlayCameraShake(void* ShakeClass, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
bool _Script_Engine::PlayerCameraManager::get_bDefaultConstrainAspectRatio() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab8 + 0)) & 2 != 0;
}
void _Script_Engine::PlayerCameraManager::set_bDefaultConstrainAspectRatio(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PlayerCameraManager::get_bUseClientSideCameraUpdates() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab8 + 0)) & 128 != 0;
}
void _Script_Engine::PlayerCameraManager::set_bUseClientSideCameraUpdates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PlayerCameraManager::PhotographyCameraModify(_Script_CoreUObject::Vector NewCameraLocation, _Script_CoreUObject::Vector PreviousCameraLocation, _Script_CoreUObject::Vector OriginalCameraLocation, _Script_CoreUObject::Vector& ResultCameraLocation) {
    return;
}
bool _Script_Engine::PlayerCameraManager::get_bGameCameraCutThisFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ab9 + 0)) & 4 != 0;
}
void _Script_Engine::PlayerCameraManager::set_bGameCameraCutThisFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ab9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ab9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::CameraModifier* _Script_Engine::PlayerCameraManager::AddNewCameraModifier(void* ModifierClass) {
    return;
}
float& _Script_Engine::PlayerCameraManager::get_ViewPitchMax() {
    return *(float*)((uintptr_t)this + 0x1ac0);
}
float& _Script_Engine::PlayerCameraManager::get_ViewYawMin() {
    return *(float*)((uintptr_t)this + 0x1ac4);
}
_Script_Engine::CameraModifier* _Script_Engine::PlayerCameraManager::FindCameraModifierByClass(void* ModifierClass) {
    return;
}
float& _Script_Engine::PlayerCameraManager::get_ViewRollMin() {
    return *(float*)((uintptr_t)this + 0x1acc);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerCameraManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerCameraManager");
    return result;
}
void _Script_Engine::PlayerCameraManager::StopCameraShake(_Script_Engine::CameraShake* ShakeInstance, bool bImmediately) {
    return;
}
void _Script_Engine::PlayerCameraManager::StopCameraFade() {
    return;
}
void _Script_Engine::PlayerCameraManager::StopCameraAnimInst(_Script_Engine::CameraAnimInst* AnimInst, bool bImmediate) {
    return;
}
void _Script_Engine::PlayerCameraManager::StopAllCameraShakes(bool bImmediately) {
    return;
}
void _Script_Engine::PlayerCameraManager::OnPhotographyMultiPartCaptureEnd() {
    return;
}
void _Script_Engine::PlayerCameraManager::StopAllCameraAnims(bool bImmediate) {
    return;
}
void _Script_Engine::PlayerCameraManager::StartCameraFade(float FromAlpha, float ToAlpha, float Duration, _Script_CoreUObject::LinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished) {
    return;
}
void _Script_Engine::PlayerCameraManager::SetManualCameraFade(float InFadeAmount, _Script_CoreUObject::LinearColor Color, bool bInFadeAudio) {
    return;
}
bool _Script_Engine::PlayerCameraManager::RemoveCameraModifier(_Script_Engine::CameraModifier* ModifierToRemove) {
    return;
}
_Script_Engine::CameraAnimInst* _Script_Engine::PlayerCameraManager::PlayCameraAnim(_Script_Engine::CameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
void _Script_Engine::PlayerCameraManager::OnPhotographySessionStart() {
    return;
}
void _Script_Engine::PlayerCameraManager::OnPhotographySessionEnd() {
    return;
}
_Script_Engine::PlayerController* _Script_Engine::PlayerCameraManager::GetOwningPlayerController() {
    return;
}
float _Script_Engine::PlayerCameraManager::GetFOVAngle() {
    return;
}
_Script_Engine::EmitterCameraLensEffectBase* _Script_Engine::PlayerCameraManager::AddCameraLensEffect(void* LensEffectEmitterClass) {
    return;
}
