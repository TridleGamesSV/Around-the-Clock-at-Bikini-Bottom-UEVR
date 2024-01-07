#include "..\FUObjectArray.hpp"
#include "BargN_Bin_Calm_Theme_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_BargN_Bin_Calm_Theme_BP::BargN_Bin_Calm_Theme_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/BargN_Bin_Calm_Theme_BP.BargN_Bin_Calm_Theme_BP_C");
    return result;
}
