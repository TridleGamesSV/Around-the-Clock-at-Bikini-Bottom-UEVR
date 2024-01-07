#include "..\FUObjectArray.hpp"
#include "CrowdFollowingComponent.hpp"
#include "PathFollowingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CharacterMovementComponent.hpp"
void* _Script_AIModule::CrowdFollowingComponent::get_CrowdAgentMoveDirection() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_Engine::CharacterMovementComponent*& _Script_AIModule::CrowdFollowingComponent::get_CharacterMovement() {
    return *(_Script_Engine::CharacterMovementComponent**)((uintptr_t)this + 0x3c0);
}
void* _Script_AIModule::CrowdFollowingComponent::get_GroupsToIgnore() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_AIModule::CrowdFollowingComponent::get_GroupsToAvoid() {
    return (void*)((uintptr_t)this + 0x3cc);
}
void* _Script_AIModule::CrowdFollowingComponent::get_AvoidanceGroup() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_AIModule::CrowdFollowingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.CrowdFollowingComponent");
    return result;
}
void _Script_AIModule::CrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend) {
    return;
}
