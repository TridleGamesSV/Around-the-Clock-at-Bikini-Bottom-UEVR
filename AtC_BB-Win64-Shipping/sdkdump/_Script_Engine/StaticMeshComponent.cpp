#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MeshComponent.hpp"
#include "StaticMesh.hpp"
#include "StaticMeshComponent.hpp"
int32_t& _Script_Engine::StaticMeshComponent::get_ForcedLodModel() {
    return *(int32_t*)((uintptr_t)this + 0x688);
}
void _Script_Engine::StaticMeshComponent::set_bForceNavigationObstacle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::StaticMeshComponent::set_bOverrideWireframeColor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticMeshComponent::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x6d8);
}
int32_t& _Script_Engine::StaticMeshComponent::get_PreviousLODLevel() {
    return *(int32_t*)((uintptr_t)this + 0x68c);
}
int32_t& _Script_Engine::StaticMeshComponent::get_MinLOD() {
    return *(int32_t*)((uintptr_t)this + 0x690);
}
bool _Script_Engine::StaticMeshComponent::get_bForceNavigationObstacle() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 8 != 0;
}
bool _Script_Engine::StaticMeshComponent::get_bOverrideWireframeColor() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::StaticMeshComponent::get_SubDivisionStepSize() {
    return *(int32_t*)((uintptr_t)this + 0x694);
}
void* _Script_Engine::StaticMeshComponent::get_WireframeColorOverride() {
    return (void*)((uintptr_t)this + 0x6a0);
}
_Script_Engine::StaticMesh*& _Script_Engine::StaticMeshComponent::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x698);
}
bool _Script_Engine::StaticMeshComponent::get_bOverrideMinLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 2 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bOverrideMinLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bOverrideNavigationExport() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 4 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bOverrideNavigationExport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bDisallowMeshPaintPerInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 16 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bDisallowMeshPaintPerInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bIgnoreInstanceForTextureStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 32 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bIgnoreInstanceForTextureStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bOverrideLightMapRes() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 64 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bOverrideLightMapRes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bCastDistanceFieldIndirectShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a4 + 0)) & 128 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bCastDistanceFieldIndirectShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a4 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bOverrideDistanceFieldSelfShadowBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a5 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bOverrideDistanceFieldSelfShadowBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bUseSubDivisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a5 + 0)) & 2 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bUseSubDivisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a5 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::StaticMeshComponent::get_bUseDefaultCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a5 + 0)) & 4 != 0;
}
void _Script_Engine::StaticMeshComponent::set_bUseDefaultCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a5 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_Engine::StaticMeshComponent::get_OverriddenLightMapRes() {
    return *(int32_t*)((uintptr_t)this + 0x6a8);
}
float& _Script_Engine::StaticMeshComponent::get_DistanceFieldIndirectShadowMinVisibility() {
    return *(float*)((uintptr_t)this + 0x6ac);
}
float& _Script_Engine::StaticMeshComponent::get_DistanceFieldSelfShadowBias() {
    return *(float*)((uintptr_t)this + 0x6b0);
}
float& _Script_Engine::StaticMeshComponent::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x6b4);
}
void* _Script_Engine::StaticMeshComponent::get_LODData() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Script_Engine::StaticMeshComponent::get_StreamingTextureData() {
    return (void*)((uintptr_t)this + 0x6c8);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMeshComponent");
    return result;
}
bool _Script_Engine::StaticMeshComponent::SetStaticMesh(_Script_Engine::StaticMesh* NewMesh) {
    return;
}
void _Script_Engine::StaticMeshComponent::SetForcedLodModel(int32_t NewForcedLodModel) {
    return;
}
void _Script_Engine::StaticMeshComponent::SetDistanceFieldSelfShadowBias(float NewValue) {
    return;
}
void _Script_Engine::StaticMeshComponent::OnRep_StaticMesh(_Script_Engine::StaticMesh* OldStaticMesh) {
    return;
}
void _Script_Engine::StaticMeshComponent::GetLocalBounds(_Script_CoreUObject::Vector& Min, _Script_CoreUObject::Vector& Max) {
    return;
}
