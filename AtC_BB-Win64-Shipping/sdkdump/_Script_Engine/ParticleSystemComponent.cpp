#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "ParticleSystem.hpp"
#include "ParticleSystemComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
_Script_Engine::ParticleSystem*& _Script_Engine::ParticleSystemComponent::get_Template() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x660);
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourceStrength(int32_t EmitterIndex, int32_t SourceIndex, float& OutSourceStrength) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::get_bAllowRecycling() {
    return (*(uint8_t*)((uintptr_t)this + 0x689 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bUpdateOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x689 + 0);
    *(uint8_t*)((uintptr_t)this + 0x689 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTargetPoint, int32_t TargetIndex) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_EmitterMaterials() {
    return (void*)((uintptr_t)this + 0x668);
}
void _Script_Engine::ParticleSystemComponent::SetAutoAttachmentParameters(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_SkelMeshComponents() {
    return (void*)((uintptr_t)this + 0x678);
}
bool _Script_Engine::ParticleSystemComponent::get_bResetOnDetach() {
    return (*(uint8_t*)((uintptr_t)this + 0x688 + 0)) & 128 != 0;
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t TargetIndex) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::get_bUpdateOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x689 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bResetOnDetach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x688 + 0);
    *(uint8_t*)((uintptr_t)this + 0x688 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::ParticleSystemComponent::SetEmitterEnable(void* EmitterName, bool bNewEnableState) {
    return;
}
void _Script_Engine::ParticleSystemComponent::set_bAllowRecycling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x689 + 0);
    *(uint8_t*)((uintptr_t)this + 0x689 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bAutoManageAttachment() {
    return (*(uint8_t*)((uintptr_t)this + 0x689 + 0)) & 16 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bAutoManageAttachment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x689 + 0);
    *(uint8_t*)((uintptr_t)this + 0x689 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetTangent(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTangentPoint) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::get_bWarmingUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x689 + 0)) & 128 != 0;
}
void* _Script_Engine::ParticleSystemComponent::get_OnSystemFinished() {
    return (void*)((uintptr_t)this + 0x7e0);
}
void _Script_Engine::ParticleSystemComponent::set_bWarmingUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x689 + 0);
    *(uint8_t*)((uintptr_t)this + 0x689 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::ParticleSystemComponent::get_bOverrideLODMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x68a + 0)) & 1 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bOverrideLODMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68a + 0);
    *(uint8_t*)((uintptr_t)this + 0x68a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t _Script_Engine::ParticleSystemComponent::GetNumActiveParticles() {
    return;
}
bool _Script_Engine::ParticleSystemComponent::get_bSkipUpdateDynamicDataDuringTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x68a + 0)) & 2 != 0;
}
void _Script_Engine::ParticleSystemComponent::set_bSkipUpdateDynamicDataDuringTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68a + 0);
    *(uint8_t*)((uintptr_t)this + 0x68a + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::ParticleSystemComponent::get_LODMethod() {
    return (void*)((uintptr_t)this + 0x68c);
}
void* _Script_Engine::ParticleSystemComponent::get_RequiredSignificance() {
    return (void*)((uintptr_t)this + 0x68d);
}
void* _Script_Engine::ParticleSystemComponent::get_InstanceParameters() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachLocationRule() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleSpawn() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleBurst() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleDeath() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Script_Engine::ParticleSystemComponent::get_OnParticleCollide() {
    return (void*)((uintptr_t)this + 0x6d0);
}
void* _Script_Engine::ParticleSystemComponent::get_OldPosition() {
    return (void*)((uintptr_t)this + 0x6e0);
}
void _Script_Engine::ParticleSystemComponent::SetFloatParameter(void* ParameterName, float Param) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_PartSysVelocity() {
    return (void*)((uintptr_t)this + 0x6ec);
}
float& _Script_Engine::ParticleSystemComponent::get_WarmupTime() {
    return *(float*)((uintptr_t)this + 0x6f8);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleSystemComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleSystemComponent");
    return result;
}
float& _Script_Engine::ParticleSystemComponent::get_WarmupTickRate() {
    return *(float*)((uintptr_t)this + 0x6fc);
}
void _Script_Engine::ParticleSystemComponent::SetVectorParameter(void* ParameterName, _Script_CoreUObject::Vector Param) {
    return;
}
float& _Script_Engine::ParticleSystemComponent::get_SecondsBeforeInactive() {
    return *(float*)((uintptr_t)this + 0x704);
}
float& _Script_Engine::ParticleSystemComponent::get_MaxTimeBeforeForceUpdateTransform() {
    return *(float*)((uintptr_t)this + 0x70c);
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourceTangent(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutTangentPoint) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_ReplayClips() {
    return (void*)((uintptr_t)this + 0x730);
}
float& _Script_Engine::ParticleSystemComponent::get_CustomTimeDilation() {
    return *(float*)((uintptr_t)this + 0x748);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachParent() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachSocketName() {
    return (void*)((uintptr_t)this + 0x7a8);
}
void _Script_Engine::ParticleSystemComponent::SetColorParameter(void* ParameterName, _Script_CoreUObject::LinearColor Param) {
    return;
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachRotationRule() {
    return (void*)((uintptr_t)this + 0x7b1);
}
void* _Script_Engine::ParticleSystemComponent::get_AutoAttachScaleRule() {
    return (void*)((uintptr_t)this + 0x7b2);
}
void _Script_Engine::ParticleSystemComponent::SetTrailSourceData(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetTemplate(_Script_Engine::ParticleSystem* NewTemplate) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetMaterialParameter(void* ParameterName, _Script_Engine::MaterialInterface* Param) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamTargetStrength(int32_t EmitterIndex, float NewTargetStrength, int32_t TargetIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourceTangent(int32_t EmitterIndex, _Script_CoreUObject::Vector NewTangentPoint, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetActorParameter(void* ParameterName, _Script_Engine::Actor* Param) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourceStrength(int32_t EmitterIndex, float NewSourceStrength, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamSourcePoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewSourcePoint, int32_t SourceIndex) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector NewEndPoint) {
    return;
}
void _Script_Engine::ParticleSystemComponent::SetAutoAttachParams(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationType) {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::ParticleSystemComponent::GetNamedMaterial(void* InName) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetStrength(int32_t EmitterIndex, int32_t TargetIndex, float& OutTargetStrength) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamTargetPoint(int32_t EmitterIndex, int32_t TargetIndex, _Script_CoreUObject::Vector& OutTargetPoint) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamSourcePoint(int32_t EmitterIndex, int32_t SourceIndex, _Script_CoreUObject::Vector& OutSourcePoint) {
    return;
}
bool _Script_Engine::ParticleSystemComponent::GetBeamEndPoint(int32_t EmitterIndex, _Script_CoreUObject::Vector& OutEndPoint) {
    return;
}
void _Script_Engine::ParticleSystemComponent::GenerateParticleEvent(void* InEventName, float InEmitterTime, _Script_CoreUObject::Vector InLocation, _Script_CoreUObject::Vector InDirection, _Script_CoreUObject::Vector InVelocity) {
    return;
}
void _Script_Engine::ParticleSystemComponent::EndTrails() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::ParticleSystemComponent::CreateNamedDynamicMaterialInstance(void* InName, _Script_Engine::MaterialInterface* SourceMaterial) {
    return;
}
void _Script_Engine::ParticleSystemComponent::BeginTrails(void* InFirstSocketName, void* InSecondSocketName, void* InWidthMode, float InWidth) {
    return;
}
