#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletalMeshLODGroupSettings.hpp"
float& _Script_Engine::SkeletalMeshLODGroupSettings::get_ScreenSize() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SkeletalMeshLODGroupSettings::get_OptimizationSettings() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMeshLODGroupSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletalMeshLODGroupSettings");
    return result;
}
