#include "..\FUObjectArray.hpp"
#include "Mini_Dirty_Bubble_Summon_2_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void* _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x318);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::get_Bubble() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x320);
}
void _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x328);
}
void _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::ExecuteUbergraph_Mini_Dirty_Bubble_Summon_2_BP(int32_t EntryPoint) {
    return;
}
void _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::ReceiveBeginPlay0() {
    return;
}
_Script_CoreUObject::Class* _Game_Blueprints_Mini_Dirty_Bubble_Summon_2_BP::Mini_Dirty_Bubble_Summon_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Mini_Dirty_Bubble_Summon_2_BP.Mini_Dirty_Bubble_Summon_2_BP_C");
    return result;
}
