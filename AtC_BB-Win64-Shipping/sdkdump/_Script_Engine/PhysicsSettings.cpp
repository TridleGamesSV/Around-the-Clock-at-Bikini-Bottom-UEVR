#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "PhysicsSettings.hpp"
void* _Script_Engine::PhysicsSettings::get_DefaultShapeComplexity() {
    return (void*)((uintptr_t)this + 0x75);
}
float& _Script_Engine::PhysicsSettings::get_DefaultGravityZ() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::PhysicsSettings::get_MaxSubstepDeltaTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_Engine::PhysicsSettings::get_TriangleMeshTriangleMinAreaThreshold() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::PhysicsSettings::get_bSuppressFaceRemapTable() {
    return (*(uint8_t*)((uintptr_t)this + 0x77 + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSettings::get_DefaultTerminalVelocity() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::PhysicsSettings::get_DefaultFluidFriction() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::PhysicsSettings::get_SimulateScratchMemorySize() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::PhysicsSettings::get_bEnableAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnablePCM(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::PhysicsSettings::get_RagdollAggregateThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void _Script_Engine::PhysicsSettings::set_bEnableAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableShapeSharing() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSubsteppingAsync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bEnableShapeSharing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnablePCM() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bEnableStabilization() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnableStabilization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bWarnMissingLocks() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bWarnMissingLocks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnable2DPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnable2DPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_LockedAxis() {
    return (void*)((uintptr_t)this + 0x56);
}
void* _Script_Engine::PhysicsSettings::get_DefaultDegreesOfFreedom() {
    return (void*)((uintptr_t)this + 0x57);
}
float& _Script_Engine::PhysicsSettings::get_BounceThresholdVelocity() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::PhysicsSettings::get_FrictionCombineMode() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::PhysicsSettings::get_RestitutionCombineMode() {
    return (void*)((uintptr_t)this + 0x5d);
}
float& _Script_Engine::PhysicsSettings::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_Engine::PhysicsSettings::get_MaxDepenetrationVelocity() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::PhysicsSettings::get_ContactOffsetMultiplier() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::PhysicsSettings::get_MinContactOffset() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::PhysicsSettings::get_bDisableActiveActors() {
    return (*(uint8_t*)((uintptr_t)this + 0x79 + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSettings::get_MaxContactOffset() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_Engine::PhysicsSettings::get_bSimulateSkeletalMeshOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bSupportUVFromHitResults() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSimulateSkeletalMeshOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDefaultHasComplexCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x76 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDefaultHasComplexCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x76 + 0);
    *(uint8_t*)((uintptr_t)this + 0x76 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bSuppressFaceRemapTable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x77 + 0);
    *(uint8_t*)((uintptr_t)this + 0x77 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bSupportUVFromHitResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bDisableActiveActors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_SyncSceneSmoothingFactor() {
    return *(float*)((uintptr_t)this + 0x8c);
}
bool _Script_Engine::PhysicsSettings::get_bDisableCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0x7a + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7a + 0);
    *(uint8_t*)((uintptr_t)this + 0x7a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableEnhancedDeterminism() {
    return (*(uint8_t*)((uintptr_t)this + 0x7b + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnableEnhancedDeterminism(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7b + 0);
    *(uint8_t*)((uintptr_t)this + 0x7b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_MaxPhysicsDeltaTime() {
    return *(float*)((uintptr_t)this + 0x7c);
}
bool _Script_Engine::PhysicsSettings::get_bSubstepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSubstepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bSubsteppingAsync() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::PhysicsSettings::get_MaxSubsteps() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
float& _Script_Engine::PhysicsSettings::get_AsyncSceneSmoothingFactor() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_Engine::PhysicsSettings::get_InitialAverageFrameRate() {
    return *(float*)((uintptr_t)this + 0x94);
}
int32_t& _Script_Engine::PhysicsSettings::get_PhysXTreeRebuildRate() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::PhysicsSettings::get_PhysicalSurfaces() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsSettings");
    return result;
}
