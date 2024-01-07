#include "..\FUObjectArray.hpp"
#include "Prawn_Idle_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Prawn_Idle_BP::Prawn_Idle_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Prawn_Idle_BP.Prawn_Idle_BP_C");
    return result;
}
