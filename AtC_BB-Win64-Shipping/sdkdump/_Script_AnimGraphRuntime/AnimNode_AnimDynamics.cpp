#include "..\FUObjectArray.hpp"
#include "AnimNode_AnimDynamics.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ChainEnd() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoEval() {
    return (*(uint8_t*)((uintptr_t)this + 0x111 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_RelativeSpaceBone() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUseSphericalLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bEnableWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bChain() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bChain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoundBone() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoxExtents() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LocalJointOffset() {
    return (void*)((uintptr_t)this + 0xd4);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0xe0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphereCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bLinearSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0xe4 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bLinearSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bAngularSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0xe5 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bAngularSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearSpringConstant() {
    return *(float*)((uintptr_t)this + 0xe8);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularSpringConstant() {
    return *(float*)((uintptr_t)this + 0xec);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bEnableWind() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bWindWasEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xf1 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideLinearDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bWindWasEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_WindScale() {
    return *(float*)((uintptr_t)this + 0xf4);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideLinearDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearDampingOverride() {
    return *(float*)((uintptr_t)this + 0xfc);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularDampingOverride() {
    return *(float*)((uintptr_t)this + 0x104);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularBiasOverride() {
    return *(float*)((uintptr_t)this + 0x10c);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoEval(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x111 + 0);
    *(uint8_t*)((uintptr_t)this + 0x111 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_AnimDynamics");
    return result;
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPreUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x114);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPostUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ConstraintSetup() {
    return (void*)((uintptr_t)this + 0x11c);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUsePlanarLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x178 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUsePlanarLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_PlanarLimits() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUseSphericalLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphericalLimits() {
    return (void*)((uintptr_t)this + 0x198);
}
