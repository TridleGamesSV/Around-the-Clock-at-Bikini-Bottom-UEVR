#include "..\FUObjectArray.hpp"
#include "Death_Shake_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Death_Shake::Death_Shake_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Death_Shake.Death_Shake_C");
    return result;
}
