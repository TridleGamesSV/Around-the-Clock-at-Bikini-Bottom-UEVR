#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StaticMeshSourceModel.hpp"
void* _Script_Engine::StaticMeshSourceModel::get_BuildSettings() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMeshSourceModel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StaticMeshSourceModel");
    return result;
}
void* _Script_Engine::StaticMeshSourceModel::get_ReductionSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::StaticMeshSourceModel::get_LODDistance() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_Engine::StaticMeshSourceModel::get_ScreenSize() {
    return *(float*)((uintptr_t)this + 0x58);
}
