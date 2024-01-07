#include "..\FUObjectArray.hpp"
#include "Sonic_Wave_AI_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
float& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_Speed() {
    return *(float*)((uintptr_t)this + 0x750);
}
_Script_Engine::ArrowComponent*& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_Arrow1() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_PushBack() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x730);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sonic_Wave_AI_BP.Sonic_Wave_AI_BP_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_Plane() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::Actor*& _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::get_Actor_To_Move() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::OnFail_631B4D534E8F454A7DF6A18722B49D91(void* MovementResult) {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::OnSuccess_631B4D534E8F454A7DF6A18722B49D91(void* MovementResult) {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::BndEvt__PushBack_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::BndEvt__PushBack_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Blueprints_Sonic_Wave_AI_BP::Sonic_Wave_AI_BP_C::ExecuteUbergraph_Sonic_Wave_AI_BP(int32_t EntryPoint) {
    return;
}
