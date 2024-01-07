#include "..\FUObjectArray.hpp"
#include "First_Dollar_Erased_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SaveGame.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_Engine::SaveGame*& _Game_Blueprints_First_Dollar_Erased_BP::First_Dollar_Erased_BP_C::get_SaverSubClass() {
    return *(_Script_Engine::SaveGame**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_Blueprints_First_Dollar_Erased_BP::First_Dollar_Erased_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/First_Dollar_Erased_BP.First_Dollar_Erased_BP_C");
    return result;
}
void _Game_Blueprints_First_Dollar_Erased_BP::First_Dollar_Erased_BP_C::UserConstructionScript() {
    return;
}
