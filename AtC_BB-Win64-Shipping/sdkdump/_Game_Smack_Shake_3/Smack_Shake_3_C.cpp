#include "..\FUObjectArray.hpp"
#include "Smack_Shake_3_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Smack_Shake_3::Smack_Shake_3_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Smack_Shake_3.Smack_Shake_3_C");
    return result;
}
