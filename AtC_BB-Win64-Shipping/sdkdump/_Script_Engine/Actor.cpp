#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "ActorComponent.hpp"
#include "ChildActorComponent.hpp"
#include "Controller.hpp"
#include "DamageType.hpp"
#include "HitResult.hpp"
#include "InputComponent.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "Pawn.hpp"
#include "PlayerController.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void _Script_Engine::Actor::set_bBlockInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::Actor::get_PrimaryActorTick() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::Actor::get_bNetTemporary() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
void _Script_Engine::Actor::SetActorTickInterval(float TickInterval) {
    return;
}
bool _Script_Engine::Actor::get_bHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::Actor::set_bRelevantForNetworkReplays(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Actor::set_bHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Actor::set_bNetTemporary(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Actor::get_bEnableAutoLODGeneration() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 8 != 0;
}
bool _Script_Engine::Actor::get_bNetStartup() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
void _Script_Engine::Actor::K2_OnEndViewTarget(_Script_Engine::PlayerController* PC) {
    return;
}
void _Script_Engine::Actor::set_bNetStartup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::Actor::set_bEnableAutoLODGeneration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Actor::OnRep_ReplicatedMovement() {
    return;
}
bool _Script_Engine::Actor::get_bOnlyRelevantToOwner() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 8 != 0;
}
bool _Script_Engine::Actor::get_bCanBeDamaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 64 != 0;
}
void _Script_Engine::Actor::ReceiveActorBeginCursorOver() {
    return;
}
void _Script_Engine::Actor::set_bOnlyRelevantToOwner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::Actor::get_RemoteRole() {
    return (void*)((uintptr_t)this + 0x85);
}
bool _Script_Engine::Actor::get_bAlwaysRelevant() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 16 != 0;
}
void _Script_Engine::Actor::set_bAlwaysRelevant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float _Script_Engine::Actor::GetActorTimeDilation() {
    return;
}
bool _Script_Engine::Actor::K2_SetActorLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
bool _Script_Engine::Actor::get_bReplicateMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 32 != 0;
}
void _Script_Engine::Actor::set_bCollideWhenPlacing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::Actor::set_bReplicateMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::Actor::set_bReplicates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::Actor*& _Script_Engine::Actor::get_Owner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x108);
}
void _Script_Engine::Actor::K2_OnBecomeViewTarget(_Script_Engine::PlayerController* PC) {
    return;
}
bool _Script_Engine::Actor::get_bTearOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 64 != 0;
}
_Script_Engine::InputComponent*& _Script_Engine::Actor::get_InputComponent() {
    return *(_Script_Engine::InputComponent**)((uintptr_t)this + 0x120);
}
void _Script_Engine::Actor::set_bTearOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float _Script_Engine::Actor::GetGameTimeSinceCreation() {
    return;
}
void* _Script_Engine::Actor::get_AutoReceiveInput() {
    return (void*)((uintptr_t)this + 0x11b);
}
void* _Script_Engine::Actor::get_OnActorBeginOverlap() {
    return (void*)((uintptr_t)this + 0x1c0);
}
bool _Script_Engine::Actor::get_bCanBeInCluster() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 64 != 0;
}
bool _Script_Engine::Actor::get_bExchangedRoles() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 128 != 0;
}
void _Script_Engine::Actor::set_bExchangedRoles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Actor::get_bNetLoadOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 1 != 0;
}
void* _Script_Engine::Actor::get_Children() {
    return (void*)((uintptr_t)this + 0x148);
}
float& _Script_Engine::Actor::get_CustomTimeDilation() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void _Script_Engine::Actor::set_bAllowTickBeforeBeginPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::Actor::set_bNetLoadOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Actor::OnRep_Owner() {
    return;
}
void* _Script_Engine::Actor::get_OnInputTouchEnd() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_Engine::Actor::get_bNetUseOwnerRelevancy() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 2 != 0;
}
void _Script_Engine::Actor::set_bNetUseOwnerRelevancy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Actor::get_bRelevantForNetworkReplays() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 4 != 0;
}
bool _Script_Engine::Actor::get_bActorIsBeingDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x83 + 0)) & 64 != 0;
}
bool _Script_Engine::Actor::get_bAllowTickBeforeBeginPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 8 != 0;
}
void* _Script_Engine::Actor::get_ReplicatedMovement() {
    return (void*)((uintptr_t)this + 0x88);
}
void _Script_Engine::Actor::set_bAllowReceiveTickEventOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::Actor::get_bAutoDestroyWhenFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 16 != 0;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetActorRelativeScale3D() {
    return;
}
void _Script_Engine::Actor::K2_DestroyActor() {
    return;
}
void* _Script_Engine::Actor::get_Role() {
    return (void*)((uintptr_t)this + 0x118);
}
void _Script_Engine::Actor::SetLifeSpan(float InLifespan) {
    return;
}
void _Script_Engine::Actor::set_bAutoDestroyWhenFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Actor::get_bBlockInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 32 != 0;
}
void _Script_Engine::Actor::set_bCanBeInCluster(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::Actor::set_bCanBeDamaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x81 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::Actor::get_bCollideWhenPlacing() {
    return (*(uint8_t*)((uintptr_t)this + 0x81 + 0)) & 128 != 0;
}
bool _Script_Engine::Actor::get_bFindCameraComponentWhenViewTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 1 != 0;
}
void* _Script_Engine::Actor::get_AttachmentReplication() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Script_Engine::Actor::set_bFindCameraComponentWhenViewTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::Actor::get_bGenerateOverlapEventsDuringLevelStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 2 != 0;
}
void _Script_Engine::Actor::set_bGenerateOverlapEventsDuringLevelStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Actor::get_bIgnoresOriginShifting() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 4 != 0;
}
void _Script_Engine::Actor::set_bIgnoresOriginShifting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Actor::get_bActorSeamlessTraveled() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 16 != 0;
}
void _Script_Engine::Actor::GetActorBounds(bool bOnlyCollidingComponents, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& BoxExtent) {
    return;
}
void _Script_Engine::Actor::set_bActorSeamlessTraveled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x82 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Actor::get_bReplicates() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 32 != 0;
}
bool _Script_Engine::Actor::get_bAllowReceiveTickEventOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x82 + 0)) & 128 != 0;
}
void* _Script_Engine::Actor::get_NetDriverName() {
    return (void*)((uintptr_t)this + 0x110);
}
bool _Script_Engine::Actor::get_bActorEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x83 + 0)) & 32 != 0;
}
void* _Script_Engine::Actor::get_OnActorHit() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Script_Engine::Actor::set_bActorEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x83 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::Actor::set_bActorIsBeingDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x83 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::Actor::K2_AddActorLocalOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
float& _Script_Engine::Actor::get_InitialLifeSpan() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::Actor::get_NetDormancy() {
    return (void*)((uintptr_t)this + 0x119);
}
bool _Script_Engine::Actor::GetActorEnableCollision() {
    return;
}
void* _Script_Engine::Actor::get_SpawnCollisionHandlingMethod() {
    return (void*)((uintptr_t)this + 0x11a);
}
void _Script_Engine::Actor::GetOverlappingComponents(void*& OverlappingComponents) {
    return;
}
int32_t& _Script_Engine::Actor::get_InputPriority() {
    return *(int32_t*)((uintptr_t)this + 0x11c);
}
void _Script_Engine::Actor::DisableInput(_Script_Engine::PlayerController* PlayerController) {
    return;
}
float& _Script_Engine::Actor::get_NetCullDistanceSquared() {
    return *(float*)((uintptr_t)this + 0x128);
}
int32_t& _Script_Engine::Actor::get_NetTag() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
float& _Script_Engine::Actor::get_NetUpdateFrequency() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_Engine::Actor::get_MinNetUpdateFrequency() {
    return *(float*)((uintptr_t)this + 0x134);
}
float& _Script_Engine::Actor::get_NetPriority() {
    return *(float*)((uintptr_t)this + 0x138);
}
_Script_Engine::Pawn*& _Script_Engine::Actor::get_Instigator() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x140);
}
_Script_Engine::SceneComponent*& _Script_Engine::Actor::get_RootComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x158);
}
void* _Script_Engine::Actor::get_ControllingMatineeActors() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_Engine::Actor::get_Layers() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Engine::Actor::get_ParentComponent() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_Engine::Actor::get_Tags() {
    return (void*)((uintptr_t)this + 0x190);
}
_Script_CoreUObject::Transform _Script_Engine::Actor::GetTransform() {
    return;
}
void* _Script_Engine::Actor::get_OnTakeAnyDamage() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void _Script_Engine::Actor::ReceiveActorOnInputTouchEnd(void* FingerIndex) {
    return;
}
void* _Script_Engine::Actor::get_OnTakePointDamage() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_Engine::Actor::get_OnActorEndOverlap() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::Actor::get_OnBeginCursorOver() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::Actor::GetComponentsByClass(void* ComponentClass) {
    return;
}
void* _Script_Engine::Actor::get_OnEndCursorOver() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::Actor::get_OnClicked() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::Actor::get_OnReleased() {
    return (void*)((uintptr_t)this + 0x210);
}
void _Script_Engine::Actor::K2_SetActorRelativeLocation(_Script_CoreUObject::Vector NewRelativeLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::Actor::get_OnInputTouchBegin() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Engine::Actor::get_OnInputTouchEnter() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Script_Engine::Actor::get_OnInputTouchLeave() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_Engine::Actor::get_OnDestroyed() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_Engine::Actor::get_OnEndPlay() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::Actor::get_InstanceComponents() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Script_Engine::Actor::get_BlueprintCreatedComponents() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Script_Engine::Actor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Actor");
    return result;
}
bool _Script_Engine::Actor::WasRecentlyRendered(float Tolerance) {
    return;
}
float _Script_Engine::Actor::GetDistanceTo(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_Engine::Actor::UserConstructionScript() {
    return;
}
void _Script_Engine::Actor::TearOff() {
    return;
}
void _Script_Engine::Actor::K2_OnReset() {
    return;
}
void _Script_Engine::Actor::SnapRootComponentTo(_Script_Engine::Actor* InParentActor, void* InSocketName) {
    return;
}
void _Script_Engine::Actor::SetTickGroup(void* NewTickGroup) {
    return;
}
void _Script_Engine::Actor::SetTickableWhenPaused(bool bTickableWhenPaused) {
    return;
}
void _Script_Engine::Actor::SetReplicates(bool bInReplicates) {
    return;
}
void _Script_Engine::Actor::SetReplicateMovement(bool bInReplicateMovement) {
    return;
}
void _Script_Engine::Actor::K2_SetActorRelativeRotation(_Script_CoreUObject::Rotator NewRelativeRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::SetOwner(_Script_Engine::Actor* NewOwner) {
    return;
}
void _Script_Engine::Actor::SetNetDormancy(void* NewDormancy) {
    return;
}
void _Script_Engine::Actor::SetActorTickEnabled(bool bEnabled) {
    return;
}
void _Script_Engine::Actor::SetActorScale3D(_Script_CoreUObject::Vector NewScale3D) {
    return;
}
void _Script_Engine::Actor::SetActorRelativeScale3D(_Script_CoreUObject::Vector NewRelativeScale) {
    return;
}
void _Script_Engine::Actor::SetActorHiddenInGame(bool bNewHidden) {
    return;
}
void _Script_Engine::Actor::K2_SetActorRelativeTransform(_Script_CoreUObject::Transform& NewRelativeTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::SetActorEnableCollision(bool bNewActorEnableCollision) {
    return;
}
bool _Script_Engine::Actor::ActorHasTag(void* Tag) {
    return;
}
void _Script_Engine::Actor::RemoveTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent) {
    return;
}
void _Script_Engine::Actor::RemoveTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor) {
    return;
}
_Script_Engine::Controller* _Script_Engine::Actor::GetInstigatorController() {
    return;
}
void _Script_Engine::Actor::ReceiveTick(float DeltaSeconds) {
    return;
}
float _Script_Engine::Actor::GetInputAxisValue(void* InputAxisName) {
    return;
}
void _Script_Engine::Actor::ReceiveRadialDamage(float DamageReceived, _Script_Engine::DamageType* DamageType, _Script_CoreUObject::Vector Origin, _Script_Engine::HitResult& HitInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
float _Script_Engine::Actor::GetLifeSpan() {
    return;
}
void _Script_Engine::Actor::ReceivePointDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_Engine::PrimitiveComponent* HitComponent, void* BoneName, _Script_CoreUObject::Vector ShotFromDirection, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser, _Script_Engine::HitResult& HitInfo) {
    return;
}
void _Script_Engine::Actor::ReceiveHit(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_Engine::Actor::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
bool _Script_Engine::Actor::K2_SetActorRotation(_Script_CoreUObject::Rotator NewRotation, bool bTeleportPhysics) {
    return;
}
void _Script_Engine::Actor::ReceiveDestroyed() {
    return;
}
void _Script_Engine::Actor::ReceiveBeginPlay() {
    return;
}
void _Script_Engine::Actor::ReceiveAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_Engine::Actor::ReceiveActorOnReleased(_Script_InputCore::Key ButtonReleased) {
    return;
}
void _Script_Engine::Actor::ReceiveActorOnInputTouchLeave(void* FingerIndex) {
    return;
}
void _Script_Engine::Actor::ReceiveActorOnInputTouchEnter(void* FingerIndex) {
    return;
}
void _Script_Engine::Actor::ReceiveActorOnInputTouchBegin(void* FingerIndex) {
    return;
}
void _Script_Engine::Actor::GetAttachedActors(void*& OutActors) {
    return;
}
void _Script_Engine::Actor::ReceiveActorOnClicked(_Script_InputCore::Key ButtonPressed) {
    return;
}
void _Script_Engine::Actor::ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_Engine::Actor::ReceiveActorEndCursorOver() {
    return;
}
void _Script_Engine::Actor::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_Engine::Actor::PrestreamTextures(float Seconds, bool bEnableStreaming, int32_t CinematicTextureGroups) {
    return;
}
void _Script_Engine::Actor::MakeNoise(float Loudness, _Script_Engine::Pawn* NoiseInstigator, _Script_CoreUObject::Vector NoiseLocation, float MaxRange, void* Tag) {
    return;
}
void _Script_Engine::Actor::OnRep_ReplicateMovement() {
    return;
}
void _Script_Engine::Actor::OnRep_Instigator() {
    return;
}
void _Script_Engine::Actor::OnRep_AttachmentReplication() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::Actor::MakeMIDForMaterial(_Script_Engine::MaterialInterface* Parent) {
    return;
}
bool _Script_Engine::Actor::K2_TeleportTo(_Script_CoreUObject::Vector DestLocation, _Script_CoreUObject::Rotator DestRotation) {
    return;
}
bool _Script_Engine::Actor::K2_SetActorTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
bool _Script_Engine::Actor::K2_SetActorLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
_Script_Engine::SceneComponent* _Script_Engine::Actor::K2_GetRootComponent() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::Actor::K2_GetActorRotation() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::K2_GetActorLocation() {
    return;
}
void _Script_Engine::Actor::K2_DetachFromActor(void* LocationRule, void* RotationRule, void* ScaleRule) {
    return;
}
void _Script_Engine::Actor::K2_DestroyComponent(_Script_Engine::ActorComponent* Component) {
    return;
}
void _Script_Engine::Actor::K2_AttachToComponent(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies) {
    return;
}
void _Script_Engine::Actor::K2_AttachToActor(_Script_Engine::Actor* ParentActor, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies) {
    return;
}
void _Script_Engine::Actor::K2_AttachRootComponentToActor(_Script_Engine::Actor* InParentActor, void* InSocketName, void* AttachLocationType, bool bWeldSimulatedBodies) {
    return;
}
void _Script_Engine::Actor::K2_AttachRootComponentTo(_Script_Engine::SceneComponent* InParent, void* InSocketName, void* AttachLocationType, bool bWeldSimulatedBodies) {
    return;
}
void _Script_Engine::Actor::K2_AddActorWorldTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::K2_AddActorWorldRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::K2_AddActorWorldOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::K2_AddActorLocalTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::K2_AddActorLocalRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::Actor::FlushNetDormancy() {
    return;
}
bool _Script_Engine::Actor::IsOverlappingActor(_Script_Engine::Actor* Other) {
    return;
}
bool _Script_Engine::Actor::IsChildActor() {
    return;
}
bool _Script_Engine::Actor::IsActorTickEnabled() {
    return;
}
float _Script_Engine::Actor::GetActorTickInterval() {
    return;
}
bool _Script_Engine::Actor::IsActorBeingDestroyed() {
    return;
}
bool _Script_Engine::Actor::HasAuthority() {
    return;
}
float _Script_Engine::Actor::GetVerticalDistanceTo(_Script_Engine::Actor* OtherActor) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetVelocity() {
    return;
}
bool _Script_Engine::Actor::GetTickableWhenPaused() {
    return;
}
float _Script_Engine::Actor::GetSquaredDistanceTo(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_Engine::Actor::ForceNetUpdate() {
    return;
}
void* _Script_Engine::Actor::GetRemoteRole() {
    return;
}
_Script_Engine::ChildActorComponent* _Script_Engine::Actor::GetParentComponent() {
    return;
}
_Script_Engine::ActorComponent* _Script_Engine::Actor::GetComponentByClass(void* ComponentClass) {
    return;
}
_Script_Engine::Actor* _Script_Engine::Actor::GetParentActor() {
    return;
}
_Script_Engine::Actor* _Script_Engine::Actor::GetOwner() {
    return;
}
void _Script_Engine::Actor::GetOverlappingActors(void*& OverlappingActors, void* ClassFilter) {
    return;
}
_Script_Engine::Pawn* _Script_Engine::Actor::GetInstigator() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetInputVectorAxisValue(_Script_InputCore::Key InputAxisKey) {
    return;
}
float _Script_Engine::Actor::GetInputAxisKeyValue(_Script_InputCore::Key InputAxisKey) {
    return;
}
float _Script_Engine::Actor::GetHorizontalDotProductTo(_Script_Engine::Actor* OtherActor) {
    return;
}
float _Script_Engine::Actor::GetHorizontalDistanceTo(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_Engine::Actor::AddTickPrerequisiteComponent(_Script_Engine::ActorComponent* PrerequisiteComponent) {
    return;
}
float _Script_Engine::Actor::GetDotProductTo(_Script_Engine::Actor* OtherActor) {
    return;
}
void* _Script_Engine::Actor::GetComponentsByTag(void* ComponentClass, void* Tag) {
    return;
}
void* _Script_Engine::Actor::GetAttachParentSocketName() {
    return;
}
_Script_Engine::Actor* _Script_Engine::Actor::GetAttachParentActor() {
    return;
}
void _Script_Engine::Actor::GetAllChildActors(void*& ChildActors, bool bIncludeDescendants) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetActorUpVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetActorScale3D() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetActorRightVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Actor::GetActorForwardVector() {
    return;
}
void _Script_Engine::Actor::GetActorEyesViewPoint(_Script_CoreUObject::Vector& OutLocation, _Script_CoreUObject::Rotator& OutRotation) {
    return;
}
void _Script_Engine::Actor::EnableInput(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Script_Engine::Actor::DetachRootComponentFromParent(bool bMaintainWorldPosition) {
    return;
}
void _Script_Engine::Actor::AddTickPrerequisiteActor(_Script_Engine::Actor* PrerequisiteActor) {
    return;
}
_Script_Engine::ActorComponent* _Script_Engine::Actor::AddComponent(void* TemplateName, bool bManualAttachment, _Script_CoreUObject::Transform& RelativeTransform, _Script_CoreUObject::Object* ComponentTemplateContext) {
    return;
}
