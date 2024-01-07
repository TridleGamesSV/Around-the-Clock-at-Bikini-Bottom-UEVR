#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BookMark.hpp"
#include "Info.hpp"
#include "PlayerState.hpp"
#include "SoundMix.hpp"
#include "WorldSettings.hpp"
void _Script_Engine::WorldSettings::set_bEnableWorldBoundsChecks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldBoundsChecks() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableNavigationSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
int32_t& _Script_Engine::WorldSettings::get_VisibilityCellSize() {
    return *(int32_t*)((uintptr_t)this + 0x37c);
}
bool _Script_Engine::WorldSettings::get_bEnableNavigationSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 2 != 0;
}
float& _Script_Engine::WorldSettings::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0x488);
}
bool _Script_Engine::WorldSettings::get_bEnableAISystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 4 != 0;
}
_Script_Engine::PlayerState*& _Script_Engine::WorldSettings::get_Pauser() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x4a8);
}
void _Script_Engine::WorldSettings::set_bEnableAISystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldComposition() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 8 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableWorldComposition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::WorldSettings::get_bUseClientSideLevelStreamingVolumes() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 16 != 0;
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoadingLocal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::WorldSettings::set_bUseClientSideLevelStreamingVolumes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::WorldSettings::get_MaxUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x4a0);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldOriginRebasing() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 32 != 0;
}
float& _Script_Engine::WorldSettings::get_DemoPlayTimeDilation() {
    return *(float*)((uintptr_t)this + 0x490);
}
void _Script_Engine::WorldSettings::set_bEnableWorldOriginRebasing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::WorldSettings::get_DefaultColorScale() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Script_Engine::WorldSettings::get_bWorldGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 64 != 0;
}
void _Script_Engine::WorldSettings::set_bWorldGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::WorldSettings::get_bGlobalGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x320 + 0)) & 128 != 0;
}
_Script_Engine::BookMark*& _Script_Engine::WorldSettings::get_BookMarks() {
    return *(_Script_Engine::BookMark**)((uintptr_t)this + 0x438);
}
void _Script_Engine::WorldSettings::set_bGlobalGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x320 + 0);
    *(uint8_t*)((uintptr_t)this + 0x320 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::WorldSettings::get_DefaultAmbientZoneSettings() {
    return (void*)((uintptr_t)this + 0x400);
}
float& _Script_Engine::WorldSettings::get_KillZ() {
    return *(float*)((uintptr_t)this + 0x324);
}
void* _Script_Engine::WorldSettings::get_KillZDamageType() {
    return (void*)((uintptr_t)this + 0x328);
}
float& _Script_Engine::WorldSettings::get_WorldGravityZ() {
    return *(float*)((uintptr_t)this + 0x330);
}
float& _Script_Engine::WorldSettings::get_GlobalGravityZ() {
    return *(float*)((uintptr_t)this + 0x334);
}
float& _Script_Engine::WorldSettings::get_MinGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x494);
}
void* _Script_Engine::WorldSettings::get_DefaultPhysicsVolumeClass() {
    return (void*)((uintptr_t)this + 0x338);
}
float& _Script_Engine::WorldSettings::get_DynamicIndirectShadowsSelfShadowingIntensity() {
    return *(float*)((uintptr_t)this + 0x374);
}
void* _Script_Engine::WorldSettings::get_PhysicsCollisionHandlerClass() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Script_Engine::WorldSettings::get_DefaultGameMode() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Script_Engine::WorldSettings::get_GameNetworkManagerClass() {
    return (void*)((uintptr_t)this + 0x350);
}
int32_t& _Script_Engine::WorldSettings::get_PackedLightAndShadowMapTextureSize() {
    return *(int32_t*)((uintptr_t)this + 0x358);
}
bool _Script_Engine::WorldSettings::get_bMinimizeBSPSections() {
    return (*(uint8_t*)((uintptr_t)this + 0x35c + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bMinimizeBSPSections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35c + 0);
    *(uint8_t*)((uintptr_t)this + 0x35c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::WorldSettings::get_DefaultMaxDistanceFieldOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x36c);
}
float& _Script_Engine::WorldSettings::get_GlobalDistanceFieldViewDistance() {
    return *(float*)((uintptr_t)this + 0x370);
}
bool _Script_Engine::WorldSettings::get_bPrecomputeVisibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::WorldSettings::set_bPrecomputeVisibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::WorldSettings::get_WorldToMeters() {
    return *(float*)((uintptr_t)this + 0x430);
}
bool _Script_Engine::WorldSettings::get_bPlaceCellsOnlyAlongCameraTracks() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 2 != 0;
}
void _Script_Engine::WorldSettings::OnRep_WorldGravityZ() {
    return;
}
void _Script_Engine::WorldSettings::set_bPlaceCellsOnlyAlongCameraTracks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::WorldSettings::get_VisibilityAggressiveness() {
    return (void*)((uintptr_t)this + 0x380);
}
float& _Script_Engine::WorldSettings::get_MonoCullingDistance() {
    return *(float*)((uintptr_t)this + 0x434);
}
bool _Script_Engine::WorldSettings::get_bForceNoPrecomputedLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bForceNoPrecomputedLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::WorldSettings::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x388);
}
float& _Script_Engine::WorldSettings::get_MatineeTimeDilation() {
    return *(float*)((uintptr_t)this + 0x48c);
}
void* _Script_Engine::WorldSettings::get_DefaultReverbSettings() {
    return (void*)((uintptr_t)this + 0x3e0);
}
_Script_Engine::SoundMix*& _Script_Engine::WorldSettings::get_DefaultBaseSoundMix() {
    return *(_Script_Engine::SoundMix**)((uintptr_t)this + 0x428);
}
float& _Script_Engine::WorldSettings::get_MaxGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x498);
}
float& _Script_Engine::WorldSettings::get_MinUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x49c);
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoading() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b0 + 0)) & 1 != 0;
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoadingLocal() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b0 + 0)) & 2 != 0;
}
void* _Script_Engine::WorldSettings::get_ReplicationViewers() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_Engine::WorldSettings::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x4c8);
}
_Script_CoreUObject::Class* _Script_Engine::WorldSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WorldSettings");
    return result;
}
