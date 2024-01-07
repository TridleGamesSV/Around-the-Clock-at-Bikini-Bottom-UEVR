#include "..\FUObjectArray.hpp"
#include "Bee_Swarm_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
_Script_Engine::BoxComponent*& _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_Swarm_Disperse() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_Bees() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::get_Swarm() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x748);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bee_Swarm_BP.Bee_Swarm_BP_C");
    return result;
}
void _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bee_Swarm_BP::Bee_Swarm_BP_C::ExecuteUbergraph_Bee_Swarm_BP(int32_t EntryPoint) {
    return;
}
