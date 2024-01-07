#include "..\FUObjectArray.hpp"
#include "Bessy_Shake_2_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Bessy_Shake_2::Bessy_Shake_2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Bessy_Shake_2.Bessy_Shake_2_C");
    return result;
}
