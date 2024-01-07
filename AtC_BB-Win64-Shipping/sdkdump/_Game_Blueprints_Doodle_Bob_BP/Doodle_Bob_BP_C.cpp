#include "..\FUObjectArray.hpp"
#include "Doodle_Bob_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil_6() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
void* _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Doodle_Bob_Back() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil_5() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnSuccess_80C60F28440FCC73D070A2AE0D1E5535(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Doodle_Bob_Front() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x788);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x740);
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnSuccess_9BC0BE194356C79ED2762AAB72230AA7(void* MovementResult) {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Erase_Player_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Erase_Player_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Erase_Player() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Chase_Music() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x778);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Chase_Yell() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x780);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Pencil() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x790);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Footsteps() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x798);
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::ExecuteUbergraph_Doodle_Bob_BP(int32_t EntryPoint) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x7a0);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x7a8);
}
_Script_CoreUObject::Class* _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Doodle_Bob_BP.Doodle_Bob_BP_C");
    return result;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnFail_2D61BEB942029170B9ED0AA61DAA3388(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnSuccess_2D61BEB942029170B9ED0AA61DAA3388(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnFail_80C60F28440FCC73D070A2AE0D1E5535(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnFail_9BC0BE194356C79ED2762AAB72230AA7(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnFail_DB8B392F4ACCC3B702E54EA0844CFB58(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::OnSuccess_DB8B392F4ACCC3B702E54EA0844CFB58(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Doodle_Bob_BP::Doodle_Bob_BP_C::ReceiveBeginPlay() {
    return;
}
