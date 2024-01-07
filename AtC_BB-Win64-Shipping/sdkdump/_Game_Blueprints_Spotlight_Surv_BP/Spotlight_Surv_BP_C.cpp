#include "..\FUObjectArray.hpp"
#include "Spotlight_Surv_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x730);
}
void* _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x728);
}
_Script_CoreUObject::Class* _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Spotlight_Surv_BP.Spotlight_Surv_BP_C");
    return result;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::OnFail_1208CDB046B343D062E4819678EEC7C3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::OnFail_D14EFFB24DD5A72D8B02AD90A495AD57(void* MovementResult) {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::OnSuccess_D14EFFB24DD5A72D8B02AD90A495AD57(void* MovementResult) {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::OnSuccess_1208CDB046B343D062E4819678EEC7C3(void* MovementResult) {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Spotlight_Surv_BP::Spotlight_Surv_BP_C::ExecuteUbergraph_Spotlight_Surv_BP(int32_t EntryPoint) {
    return;
}
