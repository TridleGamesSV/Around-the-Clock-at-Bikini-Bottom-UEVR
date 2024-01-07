#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavMovementComponent : public MovementComponent {
    void* get_NavAgentProps();
    float& get_FixedPathBrakingDistance();
    bool get_bUpdateNavAgentWithOwnersCollision();
    void set_bUpdateNavAgentWithOwnersCollision(bool value);
    bool get_bUseAccelerationForPaths();
    void set_bUseAccelerationForPaths(bool value);
    bool get_bUseFixedBrakingDistanceForPaths();
    void set_bUseFixedBrakingDistanceForPaths(bool value);
    void* get_MovementState();
    static _Script_CoreUObject::Class* static_class();
    void StopMovementKeepPathing();
    void StopActiveMovement();
    bool IsSwimming();
    bool IsMovingOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
}; // Size: 0x28
#pragma pack(pop)
}
