#include "..\FUObjectArray.hpp"
#include "Bessy_Bee_Boss_1_BP_C.hpp"
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
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_DF82501B42D1EF395D8BA88351D6A5A2(void* MovementResult) {
    return;
}
void* _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Bucking_Hitbox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Bucking_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Bucking_3() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Bucking_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Spray_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Attack_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x760);
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_07F7196F4836900D2BE495807DDE8B40(void* MovementResult) {
    return;
}
int32_t& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x780);
}
_Script_Engine::Actor*& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x788);
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::ExecuteUbergraph_Bessy_Bee_Boss_1_BP(int32_t EntryPoint) {
    return;
}
float& _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x790);
}
void* _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x794);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bessy_Bee_Boss_1_BP.Bessy_Bee_Boss_1_BP_C");
    return result;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_C30AB16743D0430461B538B6DEC4EC75(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_C30AB16743D0430461B538B6DEC4EC75(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_51B44D4E4B0598332E8715843B2DAC85(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_51B44D4E4B0598332E8715843B2DAC85(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_EEFECABF438A1489A40F5EA31BF0F1C8(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_DF82501B42D1EF395D8BA88351D6A5A2(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_62BDC8C24F60160A7218B89F76AB2C7E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_62BDC8C24F60160A7218B89F76AB2C7E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_F8D2EBF142F33CE73CA74F8A8FCBD17C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_07F7196F4836900D2BE495807DDE8B40(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_F8D2EBF142F33CE73CA74F8A8FCBD17C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_EEFECABF438A1489A40F5EA31BF0F1C8(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnFail_03B29B88423EE511DBBF0E895AE911B0(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::OnSuccess_03B29B88423EE511DBBF0E895AE911B0(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_1_BP::Bessy_Bee_Boss_1_BP_C::BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
