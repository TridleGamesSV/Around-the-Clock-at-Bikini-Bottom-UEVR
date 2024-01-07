#include "..\FUObjectArray.hpp"
#include "Patrick_Jellyfishing_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x790);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg10() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Arm5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Arm4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Arm2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Arm3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Patrick() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7b0);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Arm1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_AA2C32884453124EAB5AFC8F548B0A2C(void* MovementResult) {
    return;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Walk() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg9() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg8() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg7() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x778);
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_AA2C32884453124EAB5AFC8F548B0A2C(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x780);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x788);
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_9AD6CDF74982CB7F1B95CE8436DE09C6(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x798);
}
int32_t& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_TotalJellyfishPatrick() {
    return *(int32_t*)((uintptr_t)this + 0x7b8);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7a0);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::get_Leg1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x7a8);
}
_Script_CoreUObject::Class* _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Patrick_Jellyfishing_BP.Patrick_Jellyfishing_BP_C");
    return result;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::Add_Patrick_Jellyfish() {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_C54979DE4DD110C024020CB47753E971(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_A9516FC4459BCF765EF1F99660E2E1E8(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_C54979DE4DD110C024020CB47753E971(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_F999628B4F8E6C4310D0F8B0A91C4AC5(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_F999628B4F8E6C4310D0F8B0A91C4AC5(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_C0FD76D142C27B1960CCDF906B3BD988(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_C0FD76D142C27B1960CCDF906B3BD988(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_A9516FC4459BCF765EF1F99660E2E1E8(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_9AD6CDF74982CB7F1B95CE8436DE09C6(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_BE6D2E5248D93A8524BF5295769EAD33(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_DBF7451B477B91DB06F3C4BABE993367(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnSuccess_BE6D2E5248D93A8524BF5295769EAD33(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::OnFail_DBF7451B477B91DB06F3C4BABE993367(void* MovementResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Patrick_Jellyfishing_BP::Patrick_Jellyfishing_BP_C::ExecuteUbergraph_Patrick_Jellyfishing_BP(int32_t EntryPoint) {
    return;
}
