#include "..\FUObjectArray.hpp"
#include "Bessy_Bee_Boss_Thanos_BP_C.hpp"
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
void* _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Bucking_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Bucking_Hitbox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Bucking_3() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Bucking_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bessy_Bee_Boss_Thanos_BP.Bessy_Bee_Boss_Thanos_BP_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Spray_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Attack_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
int32_t& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x780);
}
_Script_Engine::Actor*& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x788);
}
float& _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x790);
}
void* _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x794);
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_469BD77C440522F5ABB5C58A49E8F856(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_400FAA5E405FA175E171E3A4812EE03B(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_400FAA5E405FA175E171E3A4812EE03B(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_68715AEB4C61AB92B396DB8EF580962F(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_D4E3DC854E72A2293A8AD291B98F251C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_D4E3DC854E72A2293A8AD291B98F251C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_D5A98259483673B74CA9D7A6BDB69CF2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_D5A98259483673B74CA9D7A6BDB69CF2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_E8E0AA014288C72663BE0CAB8B95F7D3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_E8E0AA014288C72663BE0CAB8B95F7D3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_1F709C1B4BBC14EFFF3B6D920451ADA6(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_1F709C1B4BBC14EFFF3B6D920451ADA6(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_68715AEB4C61AB92B396DB8EF580962F(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_8747CD5C41BCAA3645FBA28806BDED81(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnSuccess_8747CD5C41BCAA3645FBA28806BDED81(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::OnFail_469BD77C440522F5ABB5C58A49E8F856(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP::Bessy_Bee_Boss_Thanos_BP_C::ExecuteUbergraph_Bessy_Bee_Boss_Thanos_BP(int32_t EntryPoint) {
    return;
}
