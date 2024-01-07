#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ProjectileMovementComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Volter_Projectile_BP {
#pragma pack(push, 1)
struct Volter_Projectile_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh2();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh1();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::ProjectileMovementComponent*& get_Projectile();
    _Script_Engine::SphereComponent*& get_CollisionComponent();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit);
    void ExecuteUbergraph_Volter_Projectile_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
