#include "..\FUObjectArray.hpp"
#include "LaserProjectile_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
void* _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::ExecuteUbergraph_LaserProjectile(int32_t EntryPoint) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::ProjectileMovementComponent*& _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::get_Projectile() {
    return *(_Script_Engine::ProjectileMovementComponent**)((uintptr_t)this + 0x328);
}
void _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SphereComponent*& _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::get_CollisionComponent() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/LaserProjectile.LaserProjectile_C");
    return result;
}
void _Game_FirstPersonBP_Blueprints_LaserProjectile::LaserProjectile_C::ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
