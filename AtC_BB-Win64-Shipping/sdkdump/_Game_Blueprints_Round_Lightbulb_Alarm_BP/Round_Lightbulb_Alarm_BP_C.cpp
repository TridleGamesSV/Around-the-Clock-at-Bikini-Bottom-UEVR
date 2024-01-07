#include "..\FUObjectArray.hpp"
#include "Round_Lightbulb_Alarm_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AudioComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
void* _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::get_SpotLight1() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Round_Lightbulb_Alarm_BP.Round_Lightbulb_Alarm_BP_C");
    return result;
}
_Script_Engine::AudioComponent*& _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::get_Alarm() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x340);
}
_Script_Engine::SpotLightComponent*& _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::get_SpotLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x338);
}
_Script_Engine::PointLightComponent*& _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x348);
}
void _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::ReceiveBeginPlay() {
    return;
}
void _Game_Blueprints_Round_Lightbulb_Alarm_BP::Round_Lightbulb_Alarm_BP_C::ExecuteUbergraph_Round_Lightbulb_Alarm_BP(int32_t EntryPoint) {
    return;
}
