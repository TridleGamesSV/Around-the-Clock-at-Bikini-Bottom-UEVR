#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PhysicsSpringComponent.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::PhysicsSpringComponent::get_SpringLengthAtRest() {
    return *(float*)((uintptr_t)this + 0x298);
}
float& _Script_Engine::PhysicsSpringComponent::get_SpringStiffness() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Script_Engine::PhysicsSpringComponent::get_SpringCompression() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
float& _Script_Engine::PhysicsSpringComponent::get_SpringDamping() {
    return *(float*)((uintptr_t)this + 0x294);
}
bool _Script_Engine::PhysicsSpringComponent::get_bIgnoreSelf() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a1 + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSpringComponent::get_SpringRadius() {
    return *(float*)((uintptr_t)this + 0x29c);
}
void* _Script_Engine::PhysicsSpringComponent::get_SpringChannel() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void _Script_Engine::PhysicsSpringComponent::set_bIgnoreSelf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsSpringComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsSpringComponent");
    return result;
}
_Script_CoreUObject::Vector _Script_Engine::PhysicsSpringComponent::GetSpringRestingPoint() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PhysicsSpringComponent::GetSpringDirection() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PhysicsSpringComponent::GetSpringCurrentEndPoint() {
    return;
}
float _Script_Engine::PhysicsSpringComponent::GetNormalizedCompressionScalar() {
    return;
}
