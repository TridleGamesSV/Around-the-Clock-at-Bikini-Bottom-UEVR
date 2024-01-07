#include "..\FUObjectArray.hpp"
#include "Plankton_Change_Explode_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::get_Explosions() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x728);
}
void* _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::get_Boom_Light() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::get_Scream() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::get_Blood() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Plankton_Change_Explode_BP.Plankton_Change_Explode_BP_C");
    return result;
}
void _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Plankton_Change_Explode_BP::Plankton_Change_Explode_BP_C::ExecuteUbergraph_Plankton_Change_Explode_BP(int32_t EntryPoint) {
    return;
}
