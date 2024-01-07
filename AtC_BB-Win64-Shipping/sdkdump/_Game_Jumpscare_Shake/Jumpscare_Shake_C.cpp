#include "..\FUObjectArray.hpp"
#include "Jumpscare_Shake_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Jumpscare_Shake::Jumpscare_Shake_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Jumpscare_Shake.Jumpscare_Shake_C");
    return result;
}
