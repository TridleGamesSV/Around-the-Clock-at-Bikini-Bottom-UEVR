#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "OculusHMDRuntimeSettings.hpp"
bool _Script_OculusHMD::OculusHMDRuntimeSettings::get_bAutoEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_OculusHMD::OculusHMDRuntimeSettings::set_bAutoEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OculusHMD::OculusHMDRuntimeSettings::get_SplashDescs() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_OculusHMD::OculusHMDRuntimeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OculusHMD.OculusHMDRuntimeSettings");
    return result;
}
