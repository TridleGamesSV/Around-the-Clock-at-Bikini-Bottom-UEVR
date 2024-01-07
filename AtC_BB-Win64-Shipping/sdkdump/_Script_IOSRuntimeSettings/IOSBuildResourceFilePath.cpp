#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IOSBuildResourceFilePath.hpp"
void* _Script_IOSRuntimeSettings::IOSBuildResourceFilePath::get_FilePath() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_IOSRuntimeSettings::IOSBuildResourceFilePath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/IOSRuntimeSettings.IOSBuildResourceFilePath");
    return result;
}
