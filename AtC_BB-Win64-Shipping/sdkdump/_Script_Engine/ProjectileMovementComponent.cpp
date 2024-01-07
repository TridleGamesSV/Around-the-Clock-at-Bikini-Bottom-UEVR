#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "HitResult.hpp"
#include "MovementComponent.hpp"
#include "ProjectileMovementComponent.hpp"
bool _Script_Engine::ProjectileMovementComponent::get_bInitialVelocityInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 4 != 0;
}
float& _Script_Engine::ProjectileMovementComponent::get_MaxSpeed() {
    return *(float*)((uintptr_t)this + 0x13c);
}
float& _Script_Engine::ProjectileMovementComponent::get_InitialSpeed() {
    return *(float*)((uintptr_t)this + 0x138);
}
void _Script_Engine::ProjectileMovementComponent::SetVelocityInLocalSpace(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
void _Script_Engine::ProjectileMovementComponent::set_bInitialVelocityInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bRotationFollowsVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 1 != 0;
}
bool _Script_Engine::ProjectileMovementComponent::get_bShouldBounce() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 2 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bRotationFollowsVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ProjectileMovementComponent::set_bShouldBounce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bForceSubStepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 8 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bForceSubStepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bIsHomingProjectile() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 16 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bIsHomingProjectile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bBounceAngleAffectsFriction() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 32 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bBounceAngleAffectsFriction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bIsSliding() {
    return (*(uint8_t*)((uintptr_t)this + 0x140 + 0)) & 64 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bIsSliding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x140 + 0);
    *(uint8_t*)((uintptr_t)this + 0x140 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::ProjectileMovementComponent::get_PreviousHitTime() {
    return *(float*)((uintptr_t)this + 0x144);
}
int32_t& _Script_Engine::ProjectileMovementComponent::get_MaxSimulationIterations() {
    return *(int32_t*)((uintptr_t)this + 0x198);
}
void* _Script_Engine::ProjectileMovementComponent::get_PreviousHitNormal() {
    return (void*)((uintptr_t)this + 0x148);
}
float& _Script_Engine::ProjectileMovementComponent::get_ProjectileGravityScale() {
    return *(float*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::ProjectileMovementComponent::get_Buoyancy() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_Engine::ProjectileMovementComponent::get_Bounciness() {
    return *(float*)((uintptr_t)this + 0x15c);
}
float& _Script_Engine::ProjectileMovementComponent::get_Friction() {
    return *(float*)((uintptr_t)this + 0x160);
}
float& _Script_Engine::ProjectileMovementComponent::get_BounceVelocityStopSimulatingThreshold() {
    return *(float*)((uintptr_t)this + 0x164);
}
void* _Script_Engine::ProjectileMovementComponent::get_OnProjectileStop() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::ProjectileMovementComponent::get_OnProjectileBounce() {
    return (void*)((uintptr_t)this + 0x168);
}
float& _Script_Engine::ProjectileMovementComponent::get_HomingAccelerationMagnitude() {
    return *(float*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::ProjectileMovementComponent::get_HomingTargetComponent() {
    return (void*)((uintptr_t)this + 0x18c);
}
float& _Script_Engine::ProjectileMovementComponent::get_MaxSimulationTimeStep() {
    return *(float*)((uintptr_t)this + 0x194);
}
_Script_CoreUObject::Class* _Script_Engine::ProjectileMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ProjectileMovementComponent");
    return result;
}
void _Script_Engine::ProjectileMovementComponent::StopSimulating(_Script_Engine::HitResult& HitResult) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::ProjectileMovementComponent::LimitVelocity(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
