#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ProjectileMovementComponent : public MovementComponent {
    float& get_InitialSpeed();
    float& get_MaxSpeed();
    bool get_bRotationFollowsVelocity();
    void set_bRotationFollowsVelocity(bool value);
    bool get_bShouldBounce();
    void set_bShouldBounce(bool value);
    bool get_bInitialVelocityInLocalSpace();
    void set_bInitialVelocityInLocalSpace(bool value);
    bool get_bForceSubStepping();
    void set_bForceSubStepping(bool value);
    bool get_bIsHomingProjectile();
    void set_bIsHomingProjectile(bool value);
    bool get_bBounceAngleAffectsFriction();
    void set_bBounceAngleAffectsFriction(bool value);
    bool get_bIsSliding();
    void set_bIsSliding(bool value);
    float& get_PreviousHitTime();
    void* get_PreviousHitNormal();
    float& get_ProjectileGravityScale();
    float& get_Buoyancy();
    float& get_Bounciness();
    float& get_Friction();
    float& get_BounceVelocityStopSimulatingThreshold();
    void* get_OnProjectileBounce();
    void* get_OnProjectileStop();
    float& get_HomingAccelerationMagnitude();
    void* get_HomingTargetComponent();
    float& get_MaxSimulationTimeStep();
    int32_t& get_MaxSimulationIterations();
    static _Script_CoreUObject::Class* static_class();
    void StopSimulating(_Script_Engine::HitResult& HitResult);
    void SetVelocityInLocalSpace(_Script_CoreUObject::Vector NewVelocity);
    _Script_CoreUObject::Vector LimitVelocity(_Script_CoreUObject::Vector NewVelocity);
}; // Size: 0x28
#pragma pack(pop)
}
