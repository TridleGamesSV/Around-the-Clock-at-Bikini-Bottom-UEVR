#include "..\FUObjectArray.hpp"
#include "Fall_Shake_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Fall_Shake::Fall_Shake_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Fall_Shake.Fall_Shake_C");
    return result;
}
