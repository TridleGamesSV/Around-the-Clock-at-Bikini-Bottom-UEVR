#include "..\FUObjectArray.hpp"
#include "Throw_Fruit_Projectile_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::SphereComponent*& _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::get_CollisionComponent() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x330);
}
void* _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::get_Projectile_Plane() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Throw_Fruit_Projectile_BP.Throw_Fruit_Projectile_BP_C");
    return result;
}
_Script_Engine::ProjectileMovementComponent*& _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::get_Projectile() {
    return *(_Script_Engine::ProjectileMovementComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::ExecuteUbergraph_Throw_Fruit_Projectile_BP(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_Throw_Fruit_Projectile_BP::Throw_Fruit_Projectile_BP_C::ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
