#include "..\FUObjectArray.hpp"
#include "Flamethrower_Part_2_On_Blueprint_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Flamethrower_Part_2_On_Blueprint_BP::Flamethrower_Part_2_On_Blueprint_BP_C::get_Sticker_2() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x328);
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Flamethrower_Part_2_On_Blueprint_BP::Flamethrower_Part_2_On_Blueprint_BP_C::get_Sticker_1() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x330);
}
_Script_CoreUObject::Class* _Game_Blueprints_Flamethrower_Part_2_On_Blueprint_BP::Flamethrower_Part_2_On_Blueprint_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Flamethrower_Part_2_On_Blueprint_BP.Flamethrower_Part_2_On_Blueprint_BP_C");
    return result;
}
void _Game_Blueprints_Flamethrower_Part_2_On_Blueprint_BP::Flamethrower_Part_2_On_Blueprint_BP_C::UserConstructionScript() {
    return;
}
