#include "..\FUObjectArray.hpp"
#include "Power_Station_LVL1_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void _Game_Blueprints_Power_Station_LVL1_BP::Power_Station_LVL1_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Power_Station_LVL1_BP::Power_Station_LVL1_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_Power_Station_LVL1_BP::Power_Station_LVL1_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Power_Station_LVL1_BP.Power_Station_LVL1_BP_C");
    return result;
}
