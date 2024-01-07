#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ProjectileMovementComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_FirstPersonBP_Blueprints_MayoProjectile {
#pragma pack(push, 1)
struct MayoProjectile_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Mayo();
    _Script_Engine::ProjectileMovementComponent*& get_Projectile();
    _Script_Engine::SphereComponent*& get_CollisionComponent();
    float& get_Timeline_0_Walk_B5F0B354422C935627B56E94AA399A58();
    void* get_Timeline_0__Direction_B5F0B354422C935627B56E94AA399A58();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_MayoProjectile(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
