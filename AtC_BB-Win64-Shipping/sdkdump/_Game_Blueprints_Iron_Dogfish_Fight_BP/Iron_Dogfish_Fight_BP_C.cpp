#include "..\FUObjectArray.hpp"
#include "Iron_Dogfish_Fight_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Iron_Dogfish_Fight_BP::Iron_Dogfish_Fight_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Iron_Dogfish_Fight_BP.Iron_Dogfish_Fight_BP_C");
    return result;
}
