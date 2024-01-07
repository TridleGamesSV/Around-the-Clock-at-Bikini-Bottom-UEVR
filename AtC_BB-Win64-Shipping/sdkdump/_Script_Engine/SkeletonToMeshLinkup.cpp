#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SkeletonToMeshLinkup.hpp"
void* _Script_Engine::SkeletonToMeshLinkup::get_SkeletonToMeshTable() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletonToMeshLinkup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SkeletonToMeshLinkup");
    return result;
}
void* _Script_Engine::SkeletonToMeshLinkup::get_MeshToSkeletonTable() {
    return (void*)((uintptr_t)this + 0x10);
}
