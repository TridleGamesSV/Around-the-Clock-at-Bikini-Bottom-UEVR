#include "..\FUObjectArray.hpp"
#include "Punch_Hitbox_Critical_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::ExecuteUbergraph_Punch_Hitbox_Critical_BP(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::ReceiveBeginPlay0() {
    return;
}
void* _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Punch_Hitbox_Critical_BP.Punch_Hitbox_Critical_BP_C");
    return result;
}
void _Game_Blueprints_Punch_Hitbox_Critical_BP::Punch_Hitbox_Critical_BP_C::UserConstructionScript0() {
    return;
}
