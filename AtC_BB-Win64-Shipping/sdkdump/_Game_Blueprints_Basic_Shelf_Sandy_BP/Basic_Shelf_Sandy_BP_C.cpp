#include "..\FUObjectArray.hpp"
#include "Basic_Shelf_Sandy_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Basic_Shelf_Sandy_BP::Basic_Shelf_Sandy_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Basic_Shelf_Sandy_BP.Basic_Shelf_Sandy_BP_C");
    return result;
}
