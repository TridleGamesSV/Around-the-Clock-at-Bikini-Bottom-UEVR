#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HmdUserProfile.hpp"
_Script_CoreUObject::Class* _Script_OculusHMD::HmdUserProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OculusHMD.HmdUserProfile");
    return result;
}
void* _Script_OculusHMD::HmdUserProfile::get_NeckToEyeDistance() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_OculusHMD::HmdUserProfile::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OculusHMD::HmdUserProfile::get_ExtraFields() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_OculusHMD::HmdUserProfile::get_PlayerHeight() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_OculusHMD::HmdUserProfile::get_Gender() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_OculusHMD::HmdUserProfile::get_EyeHeight() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_OculusHMD::HmdUserProfile::get_IPD() {
    return *(float*)((uintptr_t)this + 0x28);
}
