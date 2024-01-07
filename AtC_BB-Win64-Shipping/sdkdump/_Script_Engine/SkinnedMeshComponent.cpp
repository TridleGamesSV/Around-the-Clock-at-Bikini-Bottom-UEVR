#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MeshComponent.hpp"
#include "PhysicsAsset.hpp"
#include "SkeletalMesh.hpp"
#include "SkinnedMeshComponent.hpp"
bool _Script_Engine::SkinnedMeshComponent::IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex) {
    return;
}
int32_t& _Script_Engine::SkinnedMeshComponent::get_ForcedLodModel() {
    return *(int32_t*)((uintptr_t)this + 0x740);
}
void _Script_Engine::SkinnedMeshComponent::set_bCanHighlightSelectedSections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SkeletalMesh*& _Script_Engine::SkinnedMeshComponent::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x688);
}
void* _Script_Engine::SkinnedMeshComponent::get_LODInfo() {
    return (void*)((uintptr_t)this + 0x758);
}
void* _Script_Engine::SkinnedMeshComponent::get_MasterPoseComponent() {
    return (void*)((uintptr_t)this + 0x690);
}
bool _Script_Engine::SkinnedMeshComponent::get_bForceMeshObjectUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x781 + 0)) & 4 != 0;
}
void* _Script_Engine::SkinnedMeshComponent::get_WireframeColor() {
    return (void*)((uintptr_t)this + 0x70c);
}
int32_t& _Script_Engine::SkinnedMeshComponent::get_MinLodModel() {
    return *(int32_t*)((uintptr_t)this + 0x744);
}
_Script_Engine::PhysicsAsset*& _Script_Engine::SkinnedMeshComponent::get_PhysicsAssetOverride() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x738);
}
void _Script_Engine::SkinnedMeshComponent::SetSkeletalMesh(_Script_Engine::SkeletalMesh* NewMesh, bool bReinitPose) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCPUSkinning() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 16 != 0;
}
float& _Script_Engine::SkinnedMeshComponent::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x754);
}
void _Script_Engine::SkinnedMeshComponent::SetSkinWeightOverride(int32_t LODIndex, void*& SkinWeights) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::get_MeshComponentUpdateFlag() {
    return (void*)((uintptr_t)this + 0x778);
}
void _Script_Engine::SkinnedMeshComponent::set_bForceWireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bUseBoundsFromMasterPoseComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 1 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bUseBoundsFromMasterPoseComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SkinnedMeshComponent::ShowMaterialSection(int32_t MaterialID, bool bShow, int32_t LODIndex) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::get_bForceWireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 2 != 0;
}
void _Script_Engine::SkinnedMeshComponent::TransformToBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisplayBones() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 4 != 0;
}
void _Script_Engine::SkinnedMeshComponent::SetForcedLOD(int32_t InNewForcedLOD) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::set_bDisplayBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisableMorphTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 8 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bEnableUpdateRateOptimizations() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 32 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bDisableMorphTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCachedLocalBoundsUpToDate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x781 + 0);
    *(uint8_t*)((uintptr_t)this + 0x781 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bHideSkin() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 16 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bDisplayDebugUpdateRateOptimizations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bHideSkin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bPerBoneMotionBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 32 != 0;
}
void _Script_Engine::SkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::set_bPerBoneMotionBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bComponentUseFixedSkelBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 64 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bComponentUseFixedSkelBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bConsiderAllBodiesForBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x779 + 0)) & 128 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bConsiderAllBodiesForBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x779 + 0);
    *(uint8_t*)((uintptr_t)this + 0x779 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bSyncAttachParentLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x77c + 0)) & 1 != 0;
}
void _Script_Engine::SkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float NewValue) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetPhysicsAsset(_Script_Engine::PhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisplayDebugUpdateRateOptimizations() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 64 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCastCapsuleDirectShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 4 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bSyncAttachParentLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x77c + 0);
    *(uint8_t*)((uintptr_t)this + 0x77c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bCachedLocalBoundsUpToDate() {
    return (*(uint8_t*)((uintptr_t)this + 0x781 + 0)) & 2 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCanHighlightSelectedSections() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 1 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bCastCapsuleDirectShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bRecentlyRendered() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 2 != 0;
}
void _Script_Engine::SkinnedMeshComponent::UnHideBoneByName(void* BoneName) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::set_bRecentlyRendered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bCastCapsuleIndirectShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x780 + 0)) & 8 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bCastCapsuleIndirectShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCPUSkinning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::SkinnedMeshComponent::ShowAllMaterialSections(int32_t LODIndex) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::set_bEnableUpdateRateOptimizations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x780 + 0);
    *(uint8_t*)((uintptr_t)this + 0x780 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bForceMeshObjectUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x781 + 0);
    *(uint8_t*)((uintptr_t)this + 0x781 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::SkinnedMeshComponent::get_CapsuleIndirectShadowMinVisibility() {
    return *(float*)((uintptr_t)this + 0x790);
}
void* _Script_Engine::SkinnedMeshComponent::get_CachedLocalBounds() {
    return (void*)((uintptr_t)this + 0x794);
}
_Script_CoreUObject::Class* _Script_Engine::SkinnedMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkinnedMeshComponent");
    return result;
}
void _Script_Engine::SkinnedMeshComponent::TransformFromBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetVertexColorOverride_LinearColor(int32_t LODIndex, void*& VertexColors) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetMinLOD(int32_t InNewMinLOD) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetMasterPoseComponent(_Script_Engine::SkinnedMeshComponent* NewMasterBoneComponent) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::IsBoneHiddenByName(void* BoneName) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::HideBoneByName(void* BoneName, void* PhysBodyOption) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetSocketBoneName(void* InSocketName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SkinnedMeshComponent::GetRefPosePosition(int32_t BoneIndex) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetParentBone(void* BoneName) {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetNumLODs() {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetNumBones() {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetBoneName(int32_t BoneIndex) {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetBoneIndex(void* BoneName) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::FindClosestBone_K2(_Script_CoreUObject::Vector TestLocation, _Script_CoreUObject::Vector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ClearVertexColorOverride(int32_t LODIndex) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ClearSkinWeightOverride(int32_t LODIndex) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::BoneIsChildOf(void* BoneName, void* ParentBoneName) {
    return;
}
