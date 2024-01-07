#include "..\FUObjectArray.hpp"
#include "Hive_Mayo_BP_5_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Hive_Mayo_BP_5.Hive_Mayo_BP_5_C");
    return result;
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_Mayo() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x320);
}
void* _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_Objective_Sparkle() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x340);
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Hive_Mayo_BP_5::Hive_Mayo_BP_5_C::ExecuteUbergraph_Hive_Mayo_BP_5(int32_t EntryPoint) {
    return;
}
