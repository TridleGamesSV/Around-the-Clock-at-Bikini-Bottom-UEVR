#include "..\FUObjectArray.hpp"
#include "HeadBobbing_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraShake.hpp"
_Script_CoreUObject::Class* _Game_HeadBobbing::HeadBobbing_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/HeadBobbing.HeadBobbing_C");
    return result;
}
