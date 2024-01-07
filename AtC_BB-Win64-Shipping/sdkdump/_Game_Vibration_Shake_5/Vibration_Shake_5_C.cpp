#include "..\FUObjectArray.hpp"
#include "Vibration_Shake_5_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_Vibration_Shake_5::Vibration_Shake_5_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Vibration_Shake_5.Vibration_Shake_5_C");
    return result;
}
