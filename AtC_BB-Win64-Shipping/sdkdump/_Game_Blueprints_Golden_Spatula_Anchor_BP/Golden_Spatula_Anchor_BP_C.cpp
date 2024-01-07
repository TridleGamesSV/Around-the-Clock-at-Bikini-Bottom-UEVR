#include "..\FUObjectArray.hpp"
#include "Golden_Spatula_Anchor_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::UserConstructionScript() {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Golden_Spatula_Anchor_BP.Golden_Spatula_Anchor_BP_C");
    return result;
}
void* _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::get_Sparkle_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::get_Sparkle() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::SaveGame*& _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::get_SaverSubClass() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x348);
}
void _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Blueprints_Golden_Spatula_Anchor_BP::Golden_Spatula_Anchor_BP_C::ExecuteUbergraph_Golden_Spatula_Anchor_BP(int32_t EntryPoint) {
    return;
}
