#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoundaryTestResult.hpp"
bool _Script_OculusHMD::BoundaryTestResult::get_IsTriggering() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_OculusHMD::BoundaryTestResult::set_IsTriggering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OculusHMD::BoundaryTestResult::get_DeviceType() {
    return (void*)((uintptr_t)this + 0x1);
}
float& _Script_OculusHMD::BoundaryTestResult::get_ClosestDistance() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_OculusHMD::BoundaryTestResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OculusHMD.BoundaryTestResult");
    return result;
}
void* _Script_OculusHMD::BoundaryTestResult::get_ClosestPoint() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_OculusHMD::BoundaryTestResult::get_ClosestPointNormal() {
    return (void*)((uintptr_t)this + 0x14);
}
