#include "..\FUObjectArray.hpp"
#include "ArchVisCharMovementComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalAcceleration() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MaxRotationalVelocity() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void* _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_RotationalDeceleration() {
    return (void*)((uintptr_t)this + 0x7cc);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingAcceleration() {
    return *(float*)((uintptr_t)this + 0x7f4);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MinPitch() {
    return *(float*)((uintptr_t)this + 0x7e4);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_MaxPitch() {
    return *(float*)((uintptr_t)this + 0x7e8);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingFriction() {
    return *(float*)((uintptr_t)this + 0x7ec);
}
float& _Script_ArchVisCharacter::ArchVisCharMovementComponent::get_WalkingSpeed() {
    return *(float*)((uintptr_t)this + 0x7f0);
}
_Script_CoreUObject::Class* _Script_ArchVisCharacter::ArchVisCharMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ArchVisCharacter.ArchVisCharMovementComponent");
    return result;
}
