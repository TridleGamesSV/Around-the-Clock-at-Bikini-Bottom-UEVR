#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OculusSceneCaptureCubemap.hpp"
void* _Script_OculusHMD::OculusSceneCaptureCubemap::get_CaptureComponents() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_OculusHMD::OculusSceneCaptureCubemap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OculusHMD.OculusSceneCaptureCubemap");
    return result;
}
