#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
#include "AnimNode_RigidBody.hpp"
bool _Script_ImmediatePhysics::AnimNode_RigidBody::get_bOverrideWorldGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
_Script_Engine::PhysicsAsset*& _Script_ImmediatePhysics::AnimNode_RigidBody::get_OverridePhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x70);
}
void* _Script_ImmediatePhysics::AnimNode_RigidBody::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x84);
}
bool _Script_ImmediatePhysics::AnimNode_RigidBody::get_bEnableWorldGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
float& _Script_ImmediatePhysics::AnimNode_RigidBody::get_CachedBoundsScale() {
    return *(float*)((uintptr_t)this + 0x9c);
}
void* _Script_ImmediatePhysics::AnimNode_RigidBody::get_OverrideWorldGravity() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_ImmediatePhysics::AnimNode_RigidBody::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_ImmediatePhysics::AnimNode_RigidBody::get_OverlapChannel() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_ImmediatePhysics::AnimNode_RigidBody::set_bEnableWorldGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ImmediatePhysics::AnimNode_RigidBody::set_bOverrideWorldGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ImmediatePhysics::AnimNode_RigidBody::get_bTransferBoneVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_ImmediatePhysics::AnimNode_RigidBody::set_bTransferBoneVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ImmediatePhysics::AnimNode_RigidBody::get_bFreezeIncomingPoseOnStart() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_ImmediatePhysics::AnimNode_RigidBody::set_bFreezeIncomingPoseOnStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ImmediatePhysics::AnimNode_RigidBody::get_bComponentSpaceSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa2 + 0)) & 1 != 0;
}
void _Script_ImmediatePhysics::AnimNode_RigidBody::set_bComponentSpaceSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ImmediatePhysics::AnimNode_RigidBody::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ImmediatePhysics.AnimNode_RigidBody");
    return result;
}
