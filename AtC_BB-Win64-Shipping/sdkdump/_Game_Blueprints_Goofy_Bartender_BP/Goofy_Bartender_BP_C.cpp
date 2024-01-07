#include "..\FUObjectArray.hpp"
#include "Goofy_Bartender_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Character.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Blueprints_Goofy_Bartender_BP::Goofy_Bartender_BP_C::UserConstructionScript() {
    return;
}
_Script_Engine::StaticMeshComponent*& _Game_Blueprints_Goofy_Bartender_BP::Goofy_Bartender_BP_C::get_Bartender() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x720);
}
_Script_CoreUObject::Class* _Game_Blueprints_Goofy_Bartender_BP::Goofy_Bartender_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Goofy_Bartender_BP.Goofy_Bartender_BP_C");
    return result;
}
