#include "..\FUObjectArray.hpp"
#include "Sinister_Slug_Idle_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Sinister_Slug_Idle_BP::Sinister_Slug_Idle_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Sinister_Slug_Idle_BP.Sinister_Slug_Idle_BP_C");
    return result;
}
