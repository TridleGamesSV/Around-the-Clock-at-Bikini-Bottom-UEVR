#include "..\FUObjectArray.hpp"
#include "Plank_Loose_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Plank_Loose_BP.Plank_Loose_BP_C");
    return result;
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x338);
}
void* _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_Creak() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_Black() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_Plank() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x340);
}
void _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Plank_Loose_BP::Plank_Loose_BP_C::ExecuteUbergraph_Plank_Loose_BP(int32_t EntryPoint) {
    return;
}
