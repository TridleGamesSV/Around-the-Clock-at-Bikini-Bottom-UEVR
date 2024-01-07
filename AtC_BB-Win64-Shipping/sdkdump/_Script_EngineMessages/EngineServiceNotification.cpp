#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServiceNotification.hpp"
void* _Script_EngineMessages::EngineServiceNotification::get_Text() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServiceNotification::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServiceNotification");
    return result;
}
double& _Script_EngineMessages::EngineServiceNotification::get_TimeSeconds() {
    return *(double*)((uintptr_t)this + 0x10);
}
