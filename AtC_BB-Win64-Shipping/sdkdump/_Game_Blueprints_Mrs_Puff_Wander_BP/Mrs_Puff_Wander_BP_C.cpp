#include "..\FUObjectArray.hpp"
#include "Mrs_Puff_Wander_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
void* _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Blood_3() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x728);
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_8791C1FE44A6115CE2770AB7CCAE59E0(void* MovementResult) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_12() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x798);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Blood_2() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_14() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_13() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_11() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_10() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_9() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_8() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_7() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x7c8);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_6() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x778);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_5() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x780);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Chase_Music() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x7b0);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_4() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x788);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_3() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x790);
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_F344A1CC495A44159CF9CE818A2CF9E5(void* MovementResult) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Idle_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x7a0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Blood_1() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x7a8);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_AttackLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x7b8);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x7c0);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x7d0);
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_8791C1FE44A6115CE2770AB7CCAE59E0(void* MovementResult) {
    return;
}
_Script_Engine::SaveGame*& _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x7d8);
}
_Script_CoreUObject::Class* _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Mrs_Puff_Wander_BP.Mrs_Puff_Wander_BP_C");
    return result;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_C9C6B8534067AC82BBC75D8F89526611(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_C9C6B8534067AC82BBC75D8F89526611(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_50CE92EC429434CBE08D6B962F87BE63(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_50CE92EC429434CBE08D6B962F87BE63(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_8149E80A447213938029778355FA6903(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_8149E80A447213938029778355FA6903(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_D39452DE41542ED70CEBBB8A082D8D82(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_D39452DE41542ED70CEBBB8A082D8D82(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_7AC0B7774703D848FDEF7AA74633C70F(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_7AC0B7774703D848FDEF7AA74633C70F(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnFail_8B0333E1440FF4905DC9359C9A9EC6A2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_8B0333E1440FF4905DC9359C9A9EC6A2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::OnSuccess_F344A1CC495A44159CF9CE818A2CF9E5(void* MovementResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Blueprints_Mrs_Puff_Wander_BP::Mrs_Puff_Wander_BP_C::ExecuteUbergraph_Mrs_Puff_Wander_BP(int32_t EntryPoint) {
    return;
}
