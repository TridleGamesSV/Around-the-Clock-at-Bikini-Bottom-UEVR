#include "..\FUObjectArray.hpp"
#include "Industrial_Wind_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Industrial_Wind_BP::Industrial_Wind_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Industrial_Wind_BP.Industrial_Wind_BP_C");
    return result;
}
