#include "..\FUObjectArray.hpp"
#include "Squid_Savvy_Survey_Panic_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Squid_Savvy_Survey_Panic_BP::Squid_Savvy_Survey_Panic_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Squid_Savvy_Survey_Panic_BP.Squid_Savvy_Survey_Panic_BP_C");
    return result;
}
