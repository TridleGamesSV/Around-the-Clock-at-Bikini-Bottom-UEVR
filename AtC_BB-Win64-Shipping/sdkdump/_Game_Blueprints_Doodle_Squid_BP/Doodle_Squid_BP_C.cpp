#include "..\FUObjectArray.hpp"
#include "Doodle_Squid_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Squished() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x728);
}
void* _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Back_Walk_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Back_Walk_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Back_Walk_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Front_Walk_4() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Front_Walk_3() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Front_Walk_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x758);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Back_Walk_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x760);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Front_Walk_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x768);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Idle() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x770);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x778);
}
_Script_CoreUObject::Class* _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Doodle_Squid_BP.Doodle_Squid_BP_C");
    return result;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnFail_BB0331CC45D34C1F45E98F94E262C276(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnSuccess_BB0331CC45D34C1F45E98F94E262C276(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnFail_B61A2FEF4BCD533A7DBEDC99A3F6A591(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnSuccess_B61A2FEF4BCD533A7DBEDC99A3F6A591(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnFail_5FF11F074E4DF4F22EFBFFA4B7C80D47(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnSuccess_5FF11F074E4DF4F22EFBFFA4B7C80D47(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnFail_35963D8F4AE8083D4D3E2C8F56311D05(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::OnSuccess_35963D8F4AE8083D4D3E2C8F56311D05(void* MovementResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Doodle_Squid_BP::Doodle_Squid_BP_C::ExecuteUbergraph_Doodle_Squid_BP(int32_t EntryPoint) {
    return;
}
