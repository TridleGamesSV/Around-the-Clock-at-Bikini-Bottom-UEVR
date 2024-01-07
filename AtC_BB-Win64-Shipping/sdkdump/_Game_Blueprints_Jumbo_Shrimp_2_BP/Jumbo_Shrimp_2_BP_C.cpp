#include "..\FUObjectArray.hpp"
#include "Jumbo_Shrimp_2_BP_C.hpp"
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
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_JS_Nipper_02() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_JS_Nipper_01() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_SH_Nipper_02() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Smoke_2() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x740);
}
float& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x790);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Smoke_1() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_SH_Nipper_01() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x760);
}
void _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
int32_t& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x780);
}
_Script_Engine::Actor*& _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x788);
}
void* _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x794);
}
_Script_CoreUObject::Class* _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jumbo_Shrimp_2_BP.Jumbo_Shrimp_2_BP_C");
    return result;
}
void _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Jumbo_Shrimp_2_BP::Jumbo_Shrimp_2_BP_C::ExecuteUbergraph_Jumbo_Shrimp_2_BP(int32_t EntryPoint) {
    return;
}
