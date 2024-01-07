#include "..\FUObjectArray.hpp"
#include "Krusty_Timer_BP_3AM_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::ExecuteUbergraph_Krusty_Timer_BP_3AM(int32_t EntryPoint) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
void* _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::UserConstructionScript0() {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Krusty_Timer_BP_3AM::Krusty_Timer_BP_3AM_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Krusty_Timer_BP_3AM.Krusty_Timer_BP_3AM_C");
    return result;
}
