#include "..\FUObjectArray.hpp"
#include "Pearl_End_Dead_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
int32_t& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_EnemyHealth() {
    return *(int32_t*)((uintptr_t)this + 0x758);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x738);
}
void* _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_Glow_2() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::ParticleSystemComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_Goo_Blood_Spew() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x728);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_Scream() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x748);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x750);
}
_Script_CoreUObject::Class* _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Pearl_End_Dead_BP.Pearl_End_Dead_BP_C");
    return result;
}
void _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Pearl_End_Dead_BP::Pearl_End_Dead_BP_C::ExecuteUbergraph_Pearl_End_Dead_BP(int32_t EntryPoint) {
    return;
}
