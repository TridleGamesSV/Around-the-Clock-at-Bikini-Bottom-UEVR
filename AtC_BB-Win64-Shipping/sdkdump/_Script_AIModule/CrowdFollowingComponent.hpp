#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PathFollowingComponent.hpp"
namespace _Script_Engine {
struct CharacterMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdFollowingComponent : public PathFollowingComponent {
    void* get_CrowdAgentMoveDirection();
    _Script_Engine::CharacterMovementComponent*& get_CharacterMovement();
    void* get_AvoidanceGroup();
    void* get_GroupsToAvoid();
    void* get_GroupsToIgnore();
    static _Script_CoreUObject::Class* static_class();
    void SuspendCrowdSteering(bool bSuspend);
}; // Size: 0x28
#pragma pack(pop)
}
