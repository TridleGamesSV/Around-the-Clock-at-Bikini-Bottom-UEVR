#include "..\FUObjectArray.hpp"
#include "NutAlarm_Underground_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/NutAlarm_Underground_BP.NutAlarm_Underground_BP_C");
    return result;
}
void* _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
void _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::get_Dirt() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::get_Digging() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_NutAlarm_Underground_BP::NutAlarm_Underground_BP_C::ExecuteUbergraph_NutAlarm_Underground_BP(int32_t EntryPoint) {
    return;
}
