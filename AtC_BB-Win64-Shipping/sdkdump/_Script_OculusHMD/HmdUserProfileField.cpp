#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HmdUserProfileField.hpp"
void* _Script_OculusHMD::HmdUserProfileField::get_FieldName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OculusHMD::HmdUserProfileField::get_FieldValue() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_OculusHMD::HmdUserProfileField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OculusHMD.HmdUserProfileField");
    return result;
}
