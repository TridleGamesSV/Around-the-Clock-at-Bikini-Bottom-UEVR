#include "..\FUObjectArray.hpp"
#include "Mayo_Minigun_PickUp_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_InputCore\Key.hpp"
_Script_Engine::BoxComponent*& _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x338);
}
void* _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::get_Interact() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Mayo_Minigun_PickUp_BP.Mayo_Minigun_PickUp_BP_C");
    return result;
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Mayo_Minigun_PickUp_BP::Mayo_Minigun_PickUp_BP_C::ExecuteUbergraph_Mayo_Minigun_PickUp_BP(int32_t EntryPoint) {
    return;
}
