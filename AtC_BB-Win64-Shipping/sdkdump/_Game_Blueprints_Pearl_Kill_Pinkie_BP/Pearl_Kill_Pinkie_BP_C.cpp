#include "..\FUObjectArray.hpp"
#include "Pearl_Kill_Pinkie_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\CameraComponent.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
void* _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x720);
}
void _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::get_Glow() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x728);
}
_Script_CoreUObject::Class* _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Pearl_Kill_Pinkie_BP.Pearl_Kill_Pinkie_BP_C");
    return result;
}
_Script_Engine::CameraComponent*& _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::get_Camera() {
    return *(_Script_Engine::CameraComponent**)((uintptr_t)this + 0x730);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::BoxComponent*& _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x738);
}
void _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Pearl_Kill_Pinkie_BP::Pearl_Kill_Pinkie_BP_C::ExecuteUbergraph_Pearl_Kill_Pinkie_BP(int32_t EntryPoint) {
    return;
}
