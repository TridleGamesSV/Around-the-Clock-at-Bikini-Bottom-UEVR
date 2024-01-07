#include "..\FUObjectArray.hpp"
#include "Power_Station_Dead_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Power_Station_Dead_BP::Power_Station_Dead_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Power_Station_Dead_BP.Power_Station_Dead_BP_C");
    return result;
}
