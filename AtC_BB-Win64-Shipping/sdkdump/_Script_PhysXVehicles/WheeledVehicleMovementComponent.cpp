#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\NavAvoidanceMask.hpp"
#include "..\_Script_Engine\PawnMovementComponent.hpp"
#include "WheeledVehicleMovementComponent.hpp"
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bDeprecatedSpringOffsetMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bWasAvoidanceUpdated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_Mass() {
    return *(float*)((uintptr_t)this + 0x198);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bDeprecatedSpringOffsetMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheeledVehicleMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.WheeledVehicleMovementComponent");
    return result;
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_WheelSetups() {
    return (void*)((uintptr_t)this + 0x188);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MinNormalizedTireLoad() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DragCoefficient() {
    return *(float*)((uintptr_t)this + 0x19c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ChassisWidth() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ChassisHeight() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bReverseAsBrake() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawBrakeInput() {
    return *(float*)((uintptr_t)this + 0x268);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bReverseAsBrake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DragArea() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_EstimatedMaxEngineSpeed() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxEngineRPM() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_DebugDragMagnitude() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_InertiaTensorScale() {
    return (void*)((uintptr_t)this + 0x1bc);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_PendingLaunchVelocity() {
    return (void*)((uintptr_t)this + 0x23c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MinNormalizedTireLoadFiltered() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxNormalizedTireLoad() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_MaxNormalizedTireLoadFiltered() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawGearDownInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 4 != 0;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThresholdLongitudinalSpeed() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_LowForwardSpeedSubStepCount() {
    return *(int32_t*)((uintptr_t)this + 0x1dc);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HighForwardSpeedSubStepCount() {
    return *(int32_t*)((uintptr_t)this + 0x1e0);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
    return;
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_Wheels() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ReplicatedState() {
    return (void*)((uintptr_t)this + 0x248);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bUseRVOAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bUseRVOAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOAvoidanceRadius() {
    return *(float*)((uintptr_t)this + 0x214);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawThrottleInput() {
    return *(float*)((uintptr_t)this + 0x264);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOAvoidanceHeight() {
    return *(float*)((uintptr_t)this + 0x218);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceConsiderationRadius() {
    return *(float*)((uintptr_t)this + 0x21c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThrottleInput() {
    return *(float*)((uintptr_t)this + 0x274);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOSteeringStep() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RVOThrottleStep() {
    return *(float*)((uintptr_t)this + 0x224);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawGearUpInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 2 != 0;
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_ThrottleInputRate() {
    return (void*)((uintptr_t)this + 0x28c);
}
int32_t& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceUID() {
    return *(int32_t*)((uintptr_t)this + 0x228);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceGroup() {
    return (void*)((uintptr_t)this + 0x22c);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_BrakeInput() {
    return *(float*)((uintptr_t)this + 0x278);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_GroupsToAvoid() {
    return (void*)((uintptr_t)this + 0x230);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HandbrakeInput() {
    return *(float*)((uintptr_t)this + 0x27c);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_GroupsToIgnore() {
    return (void*)((uintptr_t)this + 0x234);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_AvoidanceWeight() {
    return *(float*)((uintptr_t)this + 0x238);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_RawSteeringInput() {
    return *(float*)((uintptr_t)this + 0x260);
}
_Script_Engine::Controller*& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_OverrideController() {
    return *(_Script_Engine::Controller**)((uintptr_t)this + 0x2d8);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bRawHandbrakeInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawHandbrakeInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawGearUpInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::set_bRawGearDownInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_SteeringInput() {
    return *(float*)((uintptr_t)this + 0x270);
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate) {
    return;
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_IdleBrakeInput() {
    return *(float*)((uintptr_t)this + 0x280);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_StopThreshold() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_WrongDirectionThreshold() {
    return *(float*)((uintptr_t)this + 0x288);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_BrakeInputRate() {
    return (void*)((uintptr_t)this + 0x294);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_HandbrakeInputRate() {
    return (void*)((uintptr_t)this + 0x29c);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_SteeringInputRate() {
    return (void*)((uintptr_t)this + 0x2a4);
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::get_bWasAvoidanceUpdated() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ac + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToIgnoreMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToAvoidMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetBrakeInput(float Brake) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceGroupMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    return;
}
void _Script_PhysXVehicles::WheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
    return;
}
bool _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetUseAutoGears() {
    return;
}
int32_t _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetTargetGear() {
    return;
}
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetForwardSpeed() {
    return;
}
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetEngineRotationSpeed() {
    return;
}
float _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() {
    return;
}
int32_t _Script_PhysXVehicles::WheeledVehicleMovementComponent::GetCurrentGear() {
    return;
}
