#include "..\FUObjectArray.hpp"
#include "Flamethrower_Part5_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Flamethrower_Part5_BP.Flamethrower_Part5_BP_C");
    return result;
}
void* _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::get_Objective() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::get_Flamethrower() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x330);
}
void _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::ExecuteUbergraph_Flamethrower_Part5_BP(int32_t EntryPoint) {
    return;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Flamethrower_Part5_BP::Flamethrower_Part5_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
