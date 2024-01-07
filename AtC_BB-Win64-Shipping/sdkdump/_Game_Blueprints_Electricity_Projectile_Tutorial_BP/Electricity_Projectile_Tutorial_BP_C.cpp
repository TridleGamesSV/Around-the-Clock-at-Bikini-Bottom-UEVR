#include "..\FUObjectArray.hpp"
#include "Electricity_Projectile_Tutorial_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
void* _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_SkeletalMesh2() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::ProjectileMovementComponent*& _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_Projectile() {
    return *(_Script_Engine::ProjectileMovementComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_SkeletalMesh1() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::get_CollisionComponent() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x340);
}
_Script_CoreUObject::Class* _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Electricity_Projectile_Tutorial_BP.Electricity_Projectile_Tutorial_BP_C");
    return result;
}
void _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Game_Blueprints_Electricity_Projectile_Tutorial_BP::Electricity_Projectile_Tutorial_BP_C::ExecuteUbergraph_Electricity_Projectile_Tutorial_BP(int32_t EntryPoint) {
    return;
}
