#include "..\FUObjectArray.hpp"
#include "Squid_Guard_Surv_1_Intro_BP_C.hpp"
#include "..\_Script_AIModule\PawnSensingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Squid_Guard_Surv_1_Intro_BP.Squid_Guard_Surv_1_Intro_BP_C");
    return result;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x730);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_Flashlight() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x720);
}
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x728);
}
_Script_AIModule::PawnSensingComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_PawnSensing() {
    return *(_Script_AIModule::PawnSensingComponent**)((uintptr_t)this + 0x738);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_Leg_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x740);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_Leg_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x748);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::get_Body() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x750);
}
void _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP::Squid_Guard_Surv_1_Intro_BP_C::UserConstructionScript() {
    return;
}
