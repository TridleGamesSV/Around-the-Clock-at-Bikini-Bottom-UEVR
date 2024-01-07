#include "..\FUObjectArray.hpp"
#include "Round_Lightbulb_Krabs_1_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Round_Lightbulb_Krabs_1_BP::Round_Lightbulb_Krabs_1_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Round_Lightbulb_Krabs_1_BP.Round_Lightbulb_Krabs_1_BP_C");
    return result;
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Round_Lightbulb_Krabs_1_BP::Round_Lightbulb_Krabs_1_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Round_Lightbulb_Krabs_1_BP::Round_Lightbulb_Krabs_1_BP_C::UserConstructionScript() {
    return;
}
