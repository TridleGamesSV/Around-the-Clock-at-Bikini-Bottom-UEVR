#include "..\FUObjectArray.hpp"
#include "Money_Stack_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Money_Stack_BP.Money_Stack_BP_C");
    return result;
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::get_Plane() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x340);
}
void _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Blueprints_Money_Stack_BP::Money_Stack_BP_C::ExecuteUbergraph_Money_Stack_BP(int32_t EntryPoint) {
    return;
}
