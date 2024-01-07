#include "..\FUObjectArray.hpp"
#include "Giant_Jellien_Hive_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Giant_Jellien_Hive_BP::Giant_Jellien_Hive_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Giant_Jellien_Hive_BP.Giant_Jellien_Hive_BP_C");
    return result;
}
