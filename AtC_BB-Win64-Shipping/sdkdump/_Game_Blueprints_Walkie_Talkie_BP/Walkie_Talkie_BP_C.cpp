#include "..\FUObjectArray.hpp"
#include "Walkie_Talkie_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Walkie_Talkie_BP::Walkie_Talkie_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Walkie_Talkie_BP.Walkie_Talkie_BP_C");
    return result;
}
