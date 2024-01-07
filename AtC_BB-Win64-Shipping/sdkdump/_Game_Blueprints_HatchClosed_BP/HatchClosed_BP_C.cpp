#include "..\FUObjectArray.hpp"
#include "HatchClosed_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_HatchClosed_BP::HatchClosed_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/HatchClosed_BP.HatchClosed_BP_C");
    return result;
}
