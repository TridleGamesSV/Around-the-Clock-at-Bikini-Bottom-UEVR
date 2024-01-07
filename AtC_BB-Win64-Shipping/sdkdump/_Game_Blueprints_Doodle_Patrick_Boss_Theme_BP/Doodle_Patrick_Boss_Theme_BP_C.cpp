#include "..\FUObjectArray.hpp"
#include "Doodle_Patrick_Boss_Theme_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Doodle_Patrick_Boss_Theme_BP::Doodle_Patrick_Boss_Theme_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Doodle_Patrick_Boss_Theme_BP.Doodle_Patrick_Boss_Theme_BP_C");
    return result;
}
