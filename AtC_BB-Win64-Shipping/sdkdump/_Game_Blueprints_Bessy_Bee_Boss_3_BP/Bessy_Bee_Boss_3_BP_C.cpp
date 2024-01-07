#include "..\FUObjectArray.hpp"
#include "Bessy_Bee_Boss_3_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Spray_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Bucking_3() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_24325DD54D5A565CBCB07289D9A57B83(void* MovementResult) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Bucking_Hitbox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
void* _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Bucking_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Bucking_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Attack_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x760);
}
float& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x790);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
int32_t& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_2DD7A7D54840BB13E3E463BAB22FAD71(void* MovementResult) {
    return;
}
_Script_Engine::SaveGame*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x780);
}
_Script_Engine::Actor*& _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x788);
}
void* _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x794);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bessy_Bee_Boss_3_BP.Bessy_Bee_Boss_3_BP_C");
    return result;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_A2D8880D4C93856D7FBC25ACC97407F5(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_D3748A7347BCC27705C5689F7DE119DF(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_A2D8880D4C93856D7FBC25ACC97407F5(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_301F317B401A2417D769A7AF9733C89E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_301F317B401A2417D769A7AF9733C89E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_D3748A7347BCC27705C5689F7DE119DF(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_E44C379E4403F00A2A9232A842335CB9(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_E44C379E4403F00A2A9232A842335CB9(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_2DD7A7D54840BB13E3E463BAB22FAD71(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_EF519A584FA064A883B6C1B36671C243(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_EF519A584FA064A883B6C1B36671C243(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_3A6A364047231E15BF57CFB06409335A(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnSuccess_3A6A364047231E15BF57CFB06409335A(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::OnFail_24325DD54D5A565CBCB07289D9A57B83(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_3_BP::Bessy_Bee_Boss_3_BP_C::ExecuteUbergraph_Bessy_Bee_Boss_3_BP(int32_t EntryPoint) {
    return;
}
