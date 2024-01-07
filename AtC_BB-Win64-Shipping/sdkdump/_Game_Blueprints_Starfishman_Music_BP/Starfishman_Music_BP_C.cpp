#include "..\FUObjectArray.hpp"
#include "Starfishman_Music_BP_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AmbientSound.hpp"
_Script_CoreUObject::Class* _Game_Blueprints_Starfishman_Music_BP::Starfishman_Music_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Blueprints/Starfishman_Music_BP.Starfishman_Music_BP_C");
    return result;
}
