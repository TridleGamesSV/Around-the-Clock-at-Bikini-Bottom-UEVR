#include "..\FUObjectArray.hpp"
#include "Wasteland_BossMusic_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Wasteland_BossMusic_BP::Wasteland_BossMusic_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Wasteland_BossMusic_BP.Wasteland_BossMusic_BP_C");
    return result;
}
