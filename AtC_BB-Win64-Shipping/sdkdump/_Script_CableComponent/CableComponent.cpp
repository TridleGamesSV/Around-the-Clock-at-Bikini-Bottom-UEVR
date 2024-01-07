#include "..\FUObjectArray.hpp"
#include "CableComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Script_CableComponent::CableComponent::get_AttachEndTo() {
    return (void*)((uintptr_t)this + 0x690);
}
void _Script_CableComponent::CableComponent::set_bAttachStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x688 + 0);
    *(uint8_t*)((uintptr_t)this + 0x688 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x6cd + 0)) & 1 != 0;
}
bool _Script_CableComponent::CableComponent::get_bAttachStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x688 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bEnableStiffness(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x6cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_CableComponent::CableComponent::get_bAttachEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x689 + 0)) & 1 != 0;
}
void _Script_CableComponent::CableComponent::set_bAttachEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x689 + 0);
    *(uint8_t*)((uintptr_t)this + 0x689 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CableComponent::CableComponent::get_AttachEndToSocketName() {
    return (void*)((uintptr_t)this + 0x6a8);
}
float& _Script_CableComponent::CableComponent::get_CableWidth() {
    return *(float*)((uintptr_t)this + 0x6e4);
}
void* _Script_CableComponent::CableComponent::get_EndLocation() {
    return (void*)((uintptr_t)this + 0x6b0);
}
float& _Script_CableComponent::CableComponent::get_CableLength() {
    return *(float*)((uintptr_t)this + 0x6bc);
}
int32_t& _Script_CableComponent::CableComponent::get_NumSegments() {
    return *(int32_t*)((uintptr_t)this + 0x6c0);
}
float& _Script_CableComponent::CableComponent::get_SubstepTime() {
    return *(float*)((uintptr_t)this + 0x6c4);
}
bool _Script_CableComponent::CableComponent::get_bEnableStiffness() {
    return (*(uint8_t*)((uintptr_t)this + 0x6cc + 0)) & 1 != 0;
}
int32_t& _Script_CableComponent::CableComponent::get_SolverIterations() {
    return *(int32_t*)((uintptr_t)this + 0x6c8);
}
void _Script_CableComponent::CableComponent::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6cd + 0);
    *(uint8_t*)((uintptr_t)this + 0x6cd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_CableComponent::CableComponent::get_CollisionFriction() {
    return *(float*)((uintptr_t)this + 0x6d0);
}
void* _Script_CableComponent::CableComponent::get_CableForce() {
    return (void*)((uintptr_t)this + 0x6d4);
}
float& _Script_CableComponent::CableComponent::get_CableGravityScale() {
    return *(float*)((uintptr_t)this + 0x6e0);
}
int32_t& _Script_CableComponent::CableComponent::get_NumSides() {
    return *(int32_t*)((uintptr_t)this + 0x6e8);
}
float& _Script_CableComponent::CableComponent::get_TileMaterial() {
    return *(float*)((uintptr_t)this + 0x6ec);
}
_Script_CoreUObject::Class* _Script_CableComponent::CableComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CableComponent.CableComponent");
    return result;
}
void _Script_CableComponent::CableComponent::SetAttachEndTo(_Script_Engine::Actor* Actor, void* ComponentProperty, void* SocketName) {
    return;
}
void _Script_CableComponent::CableComponent::GetCableParticleLocations(void*& Locations) {
    return;
}
_Script_Engine::SceneComponent* _Script_CableComponent::CableComponent::GetAttachedComponent() {
    return;
}
_Script_Engine::Actor* _Script_CableComponent::CableComponent::GetAttachedActor() {
    return;
}
