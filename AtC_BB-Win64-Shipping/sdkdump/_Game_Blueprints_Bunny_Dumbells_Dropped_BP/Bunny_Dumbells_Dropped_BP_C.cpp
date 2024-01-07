#include "..\FUObjectArray.hpp"
#include "Bunny_Dumbells_Dropped_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Bunny_Dumbells_Dropped_BP::Bunny_Dumbells_Dropped_BP_C::get_Dumbbells() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x318);
}
void _Game_Blueprints_Bunny_Dumbells_Dropped_BP::Bunny_Dumbells_Dropped_BP_C::UserConstructionScript0() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Blueprints_Bunny_Dumbells_Dropped_BP::Bunny_Dumbells_Dropped_BP_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x320);
}
_Script_CoreUObject::Class* _Game_Blueprints_Bunny_Dumbells_Dropped_BP::Bunny_Dumbells_Dropped_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Bunny_Dumbells_Dropped_BP.Bunny_Dumbells_Dropped_BP_C");
    return result;
}
