#include "..\FUObjectArray.hpp"
#include "Rain_Thunder_Loop_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Rain_Thunder_Loop_BP::Rain_Thunder_Loop_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Rain_Thunder_Loop_BP.Rain_Thunder_Loop_BP_C");
    return result;
}
