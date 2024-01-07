#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IOSBuildResourceDirectory.hpp"
void* _Script_IOSRuntimeSettings::IOSBuildResourceDirectory::get_Path() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_IOSRuntimeSettings::IOSBuildResourceDirectory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/IOSRuntimeSettings.IOSBuildResourceDirectory");
    return result;
}
