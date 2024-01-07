#include "..\FUObjectArray.hpp"
#include "Sandy_Kill_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_Attack() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x740);
}
void* _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x728);
}
_Script_CoreUObject::Class* _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sandy_Kill_BP.Sandy_Kill_BP_C");
    return result;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_Taunt() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x738);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x748);
}
void _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Sandy_Kill_BP::Sandy_Kill_BP_C::ExecuteUbergraph_Sandy_Kill_BP(int32_t EntryPoint) {
    return;
}
