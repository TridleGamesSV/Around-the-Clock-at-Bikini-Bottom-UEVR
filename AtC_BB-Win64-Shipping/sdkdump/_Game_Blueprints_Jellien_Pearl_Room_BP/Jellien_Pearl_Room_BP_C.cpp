#include "..\FUObjectArray.hpp"
#include "Jellien_Pearl_Room_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Animation_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::ExecuteUbergraph_Jellien_Pearl_Room_BP(int32_t EntryPoint) {
    return;
}
void* _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Animation_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::Timeline_1__FinishedFunc() {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Footsteps() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Slam() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Animation_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Animation_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Pissed() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x760);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Animation_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x770);
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnSuccess_B4FDF34041877D7587C440AF8830AC73(void* MovementResult) {
    return;
}
float& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Timeline_1_Walk_B390CA734DBAD39BDF63FCA38E063B7F() {
    return *(float*)((uintptr_t)this + 0x778);
}
void* _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Timeline_1__Direction_B390CA734DBAD39BDF63FCA38E063B7F() {
    return (void*)((uintptr_t)this + 0x77c);
}
_Script_Engine::TimelineComponent*& _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x780);
}
_Script_CoreUObject::Class* _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jellien_Pearl_Room_BP.Jellien_Pearl_Room_BP_C");
    return result;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::Timeline_1__UpdateFunc() {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnFail_15BF333144F40EAAD26CECA15E0CE7C9(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnSuccess_15BF333144F40EAAD26CECA15E0CE7C9(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnFail_B299CE744C93C689840FB598C73EEAD3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnSuccess_B299CE744C93C689840FB598C73EEAD3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnFail_B4FDF34041877D7587C440AF8830AC73(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnFail_33C61E8F4E925D583005FE8653FF340E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::OnSuccess_33C61E8F4E925D583005FE8653FF340E(void* MovementResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Game_Blueprints_Jellien_Pearl_Room_BP::Jellien_Pearl_Room_BP_C::ReceiveBeginPlay() {
    return;
}
