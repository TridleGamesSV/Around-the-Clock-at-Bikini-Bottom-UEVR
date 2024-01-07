#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RadialForceComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::RadialForceComponent::set_bImpulseVelChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RadialForceComponent::get_Radius() {
    return *(float*)((uintptr_t)this + 0x290);
}
void* _Script_Engine::RadialForceComponent::get_Falloff() {
    return (void*)((uintptr_t)this + 0x294);
}
float& _Script_Engine::RadialForceComponent::get_ImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x298);
}
bool _Script_Engine::RadialForceComponent::get_bImpulseVelChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
bool _Script_Engine::RadialForceComponent::get_bIgnoreOwningActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 2 != 0;
}
float& _Script_Engine::RadialForceComponent::get_ForceStrength() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
void _Script_Engine::RadialForceComponent::set_bIgnoreOwningActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::RadialForceComponent::get_DestructibleDamage() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
void* _Script_Engine::RadialForceComponent::get_ObjectTypesToAffect() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Script_Engine::RadialForceComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RadialForceComponent");
    return result;
}
void _Script_Engine::RadialForceComponent::RemoveObjectTypeToAffect(void* ObjectType) {
    return;
}
void _Script_Engine::RadialForceComponent::FireImpulse() {
    return;
}
void _Script_Engine::RadialForceComponent::AddObjectTypeToAffect(void* ObjectType) {
    return;
}
