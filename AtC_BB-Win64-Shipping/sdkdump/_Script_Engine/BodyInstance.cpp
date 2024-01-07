#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BodyInstance.hpp"
#include "PhysicalMaterial.hpp"
void* _Script_Engine::BodyInstance::get_RigidActorAsyncId() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_Engine::BodyInstance::get_bUseCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void* _Script_Engine::BodyInstance::get_CollisionResponses() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BodyInstance::get_ObjectType() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_Engine::BodyInstance::get_CollisionProfileName() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_Engine::BodyInstance::set_bUpdateMassWhenScaleChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BodyInstance::get_CollisionEnabled() {
    return (void*)((uintptr_t)this + 0x51);
}
void* _Script_Engine::BodyInstance::get_COMNudge() {
    return (void*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::BodyInstance::get_DOFMode() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::BodyInstance::get_WalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::BodyInstance::get_SleepFamily() {
    return (void*)((uintptr_t)this + 0x53);
}
void _Script_Engine::BodyInstance::set_bUseCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::BodyInstance::get_MassScale() {
    return *(float*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::BodyInstance::get_bNotifyRigidBodyCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bNotifyRigidBodyCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockZRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 1 != 0;
}
bool _Script_Engine::BodyInstance::get_bSimulatePhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 4 != 0;
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::BodyInstance::get_PhysMaterialOverride() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0xb8);
}
void _Script_Engine::BodyInstance::set_bSimulatePhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::BodyInstance::set_bOverrideMaxDepenetrationVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::BodyInstance::get_bOverrideMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 8 != 0;
}
float& _Script_Engine::BodyInstance::get_AngularDamping() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void _Script_Engine::BodyInstance::set_bOverrideMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::BodyInstance::get_bEnableGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 16 != 0;
}
bool _Script_Engine::BodyInstance::get_bOverrideMaxAngularVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bEnableGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::BodyInstance::get_bAutoWeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 32 != 0;
}
void _Script_Engine::BodyInstance::set_bLockYRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::BodyInstance::set_bAutoWeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::BodyInstance::get_bStartAwake() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 64 != 0;
}
void _Script_Engine::BodyInstance::set_bStartAwake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::BodyInstance::get_bUseAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 8 != 0;
}
bool _Script_Engine::BodyInstance::get_bGenerateWakeEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 128 != 0;
}
void _Script_Engine::BodyInstance::set_bGenerateWakeEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::BodyInstance::get_bUpdateMassWhenScaleChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 1 != 0;
}
float& _Script_Engine::BodyInstance::get_PhysicsBlendWeight() {
    return *(float*)((uintptr_t)this + 0xcc);
}
bool _Script_Engine::BodyInstance::get_bLockTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bLockTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::BodyInstance::get_LinearDamping() {
    return *(float*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::BodyInstance::get_bLockRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bLockRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::BodyInstance::get_InertiaTensorScale() {
    return (void*)((uintptr_t)this + 0x8c);
}
bool _Script_Engine::BodyInstance::get_bLockXTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 8 != 0;
}
void _Script_Engine::BodyInstance::set_bLockXTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::BodyInstance::get_CustomSleepThresholdMultiplier() {
    return *(float*)((uintptr_t)this + 0xc4);
}
bool _Script_Engine::BodyInstance::get_bLockYTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 16 != 0;
}
void _Script_Engine::BodyInstance::set_bLockYTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockZTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 32 != 0;
}
void _Script_Engine::BodyInstance::set_bLockZTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockXRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 64 != 0;
}
void _Script_Engine::BodyInstance::set_bLockXRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56 + 0);
    *(uint8_t*)((uintptr_t)this + 0x56 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::BodyInstance::set_bOverrideWalkableSlopeOnInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockYRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x56 + 0)) & 128 != 0;
}
void _Script_Engine::BodyInstance::set_bLockZRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::BodyInstance::set_bOverrideMaxAngularVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::BodyInstance::set_bUseAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x57 + 0);
    *(uint8_t*)((uintptr_t)this + 0x57 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::BodyInstance::get_bOverrideMaxDepenetrationVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 16 != 0;
}
bool _Script_Engine::BodyInstance::get_bOverrideWalkableSlopeOnInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x57 + 0)) & 32 != 0;
}
float& _Script_Engine::BodyInstance::get_MaxDepenetrationVelocity() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_Engine::BodyInstance::get_MassInKgOverride() {
    return *(float*)((uintptr_t)this + 0x5c);
}
void* _Script_Engine::BodyInstance::get_CustomDOFPlaneNormal() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::BodyInstance::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0xc0);
}
float& _Script_Engine::BodyInstance::get_StabilizationThresholdMultiplier() {
    return *(float*)((uintptr_t)this + 0xc8);
}
int32_t& _Script_Engine::BodyInstance::get_PositionSolverIterationCount() {
    return *(int32_t*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::BodyInstance::get_RigidActorSyncId() {
    return (void*)((uintptr_t)this + 0x100);
}
int32_t& _Script_Engine::BodyInstance::get_VelocitySolverIterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_Engine::BodyInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BodyInstance");
    return result;
}
