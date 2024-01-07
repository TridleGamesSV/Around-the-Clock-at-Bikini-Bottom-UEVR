#include "..\FUObjectArray.hpp"
#include "Jelliens_Wave_3_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::ExecuteUbergraph_Jelliens_Wave_3_BP(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jelliens_Wave_3_BP.Jelliens_Wave_3_BP_C");
    return result;
}
void _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Jelliens_Wave_3_BP::Jelliens_Wave_3_BP_C::UserConstructionScript0() {
    return;
}
