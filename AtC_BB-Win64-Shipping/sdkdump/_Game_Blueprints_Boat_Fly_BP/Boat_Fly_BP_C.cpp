#include "..\FUObjectArray.hpp"
#include "Boat_Fly_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x348);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x320);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_ParticleSystem1() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_Boat() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Boat_Fly_BP.Boat_Fly_BP_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::get_Audio() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Boat_Fly_BP::Boat_Fly_BP_C::ExecuteUbergraph_Boat_Fly_BP(int32_t EntryPoint) {
    return;
}
