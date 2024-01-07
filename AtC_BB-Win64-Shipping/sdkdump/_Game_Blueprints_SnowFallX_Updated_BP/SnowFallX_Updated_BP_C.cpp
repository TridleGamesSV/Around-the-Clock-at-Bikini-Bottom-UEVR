#include "..\FUObjectArray.hpp"
#include "SnowFallX_Updated_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_SnowFallX_Updated_BP::SnowFallX_Updated_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/SnowFallX_Updated_BP.SnowFallX_Updated_BP_C");
    return result;
}
