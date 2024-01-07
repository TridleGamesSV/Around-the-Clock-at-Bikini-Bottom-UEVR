#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServiceTerminate.hpp"
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServiceTerminate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServiceTerminate");
    return result;
}
void* _Script_EngineMessages::EngineServiceTerminate::get_UserName() {
    return (void*)((uintptr_t)this + 0x0);
}
