#include "..\FUObjectArray.hpp"
#include "Jumbo_Shrimp_Idle_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Jumbo_Shrimp_Idle_BP::Jumbo_Shrimp_Idle_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Jumbo_Shrimp_Idle_BP.Jumbo_Shrimp_Idle_BP_C");
    return result;
}
