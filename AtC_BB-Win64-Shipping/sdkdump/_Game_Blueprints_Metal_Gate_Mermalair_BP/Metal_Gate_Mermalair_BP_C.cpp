#include "..\FUObjectArray.hpp"
#include "Metal_Gate_Mermalair_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Metal_Gate_Mermalair_BP::Metal_Gate_Mermalair_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Metal_Gate_Mermalair_BP.Metal_Gate_Mermalair_BP_C");
    return result;
}
