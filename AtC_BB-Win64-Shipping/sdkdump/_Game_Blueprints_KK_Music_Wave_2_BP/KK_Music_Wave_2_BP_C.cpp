#include "..\FUObjectArray.hpp"
#include "KK_Music_Wave_2_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_KK_Music_Wave_2_BP::KK_Music_Wave_2_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/KK_Music_Wave_2_BP.KK_Music_Wave_2_BP_C");
    return result;
}
