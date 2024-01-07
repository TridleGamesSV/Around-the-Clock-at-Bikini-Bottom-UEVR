#include "..\FUObjectArray.hpp"
#include "Boat_Fall_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Boom() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Explosion_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x350);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Explosion() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_ParticleSystem1() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Glow_2() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Glow_1() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x348);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x358);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Boat() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Boat_Fall_BP.Boat_Fall_BP_C");
    return result;
}
void _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::BndEvt__Explosion_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Boat_Fall_BP::Boat_Fall_BP_C::ExecuteUbergraph_Boat_Fall_BP(int32_t EntryPoint) {
    return;
}
