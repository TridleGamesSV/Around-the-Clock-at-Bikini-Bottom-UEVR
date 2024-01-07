#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SmartName.hpp"
_Script_CoreUObject::Class* _Script_Engine::SmartName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SmartName");
    return result;
}
void* _Script_Engine::SmartName::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x0);
}
