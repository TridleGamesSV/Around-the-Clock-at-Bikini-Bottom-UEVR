#include "..\FUObjectArray.hpp"
#include "MayoProjectile_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/FirstPersonBP/Blueprints/MayoProjectile.MayoProjectile_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_Mayo() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::TimelineComponent*& _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x340);
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::ReceiveHit0(_Script_Engine::PrimitiveComponent* MyComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, bool bSelfMoved, _Script_CoreUObject::Vector HitLocation, _Script_CoreUObject::Vector HitNormal, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
float& _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_Timeline_0_Walk_B5F0B354422C935627B56E94AA399A58() {
    return *(float*)((uintptr_t)this + 0x338);
}
_Script_Engine::ProjectileMovementComponent*& _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_Projectile() {
    return *(_Script_Engine::ProjectileMovementComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::SphereComponent*& _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_CollisionComponent() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x330);
}
void* _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::get_Timeline_0__Direction_B5F0B354422C935627B56E94AA399A58() {
    return (void*)((uintptr_t)this + 0x33c);
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::UserConstructionScript0() {
    return;
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::ReceiveBeginPlay0() {
    return;
}
void _Game_FirstPersonBP_Blueprints_MayoProjectile::MayoProjectile_C::ExecuteUbergraph_MayoProjectile(int32_t EntryPoint) {
    return;
}
