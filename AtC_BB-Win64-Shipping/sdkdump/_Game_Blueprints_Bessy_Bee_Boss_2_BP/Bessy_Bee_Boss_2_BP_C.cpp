#include "..\FUObjectArray.hpp"
#include "Bessy_Bee_Boss_2_BP_C.hpp"
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
void* _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Bucking_1() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Bucking_Hitbox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Bucking_2() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Bucking_3() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Attack_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Spray_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Circle() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
int32_t& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x778);
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x768);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Saver_Sub_Class() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x780);
}
_Script_Engine::Actor*& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x788);
}
float& _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x790);
}
void* _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::get_Gun_Offset() {
    return (void*)((uintptr_t)this + 0x794);
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bessy_Bee_Boss_2_BP.Bessy_Bee_Boss_2_BP_C");
    return result;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_333593644ADB356387AB33BA3ACA1724(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_333593644ADB356387AB33BA3ACA1724(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_323404744A305E6B18E24FB570C0984B(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_100A2F554587E6D789B1CAAB12675E8D(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_100A2F554587E6D789B1CAAB12675E8D(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_3FD63F1E43AA4C039CB53BB60FCB25C4(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_77A4F07942E39F593E612584D3F43576(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_77A4F07942E39F593E612584D3F43576(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_6E03B90C4EA3E07FCBBEB28F1A312145(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_6E03B90C4EA3E07FCBBEB28F1A312145(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_DAA8062A45CD932B4B18C0ADD40AC29C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::ExecuteUbergraph_Bessy_Bee_Boss_2_BP(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_DAA8062A45CD932B4B18C0ADD40AC29C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_3FD63F1E43AA4C039CB53BB60FCB25C4(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_323404744A305E6B18E24FB570C0984B(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnFail_77BF6B544F74E02447C580A98C38491C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::OnSuccess_77BF6B544F74E02447C580A98C38491C(void* MovementResult) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Bessy_Bee_Boss_2_BP::Bessy_Bee_Boss_2_BP_C::BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
