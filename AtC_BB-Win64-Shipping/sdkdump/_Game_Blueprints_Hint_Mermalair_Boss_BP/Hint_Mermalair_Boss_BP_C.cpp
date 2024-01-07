#include "..\FUObjectArray.hpp"
#include "Hint_Mermalair_Boss_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
void* _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::get_Mirror() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::get_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::SphereComponent*& _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::get_Sphere() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Hint_Mermalair_Boss_BP.Hint_Mermalair_Boss_BP_C");
    return result;
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Blueprints_Hint_Mermalair_Boss_BP::Hint_Mermalair_Boss_BP_C::ExecuteUbergraph_Hint_Mermalair_Boss_BP(int32_t EntryPoint) {
    return;
}
