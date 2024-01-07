#include "..\FUObjectArray.hpp"
#include "LightBulb_Indoors_Dim_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/LightBulb_Indoors_Dim_BP.LightBulb_Indoors_Dim_BP_C");
    return result;
}
void* _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_Engine::AudioComponent*& _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::get_Flicker() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x330);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x338);
}
void _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::ExecuteUbergraph_LightBulb_Indoors_Dim_BP(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::UserConstructionScript() {
    return;
}
void _Game_Blueprints_LightBulb_Indoors_Dim_BP::LightBulb_Indoors_Dim_BP_C::ReceiveBeginPlay() {
    return;
}
