#include "..\FUObjectArray.hpp"
#include "Alarm_Sphere_On_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_Engine::AudioComponent*& _Game_Blueprints_Alarm_Sphere_On_BP::Alarm_Sphere_On_BP_C::get_Ring() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Alarm_Sphere_On_BP::Alarm_Sphere_On_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Alarm_Sphere_On_BP::Alarm_Sphere_On_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Alarm_Sphere_On_BP.Alarm_Sphere_On_BP_C");
    return result;
}
void _Game_Blueprints_Alarm_Sphere_On_BP::Alarm_Sphere_On_BP_C::UserConstructionScript() {
    return;
}
