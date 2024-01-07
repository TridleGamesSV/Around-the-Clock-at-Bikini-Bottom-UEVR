#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\StructProperty.hpp"
#include "AnimClassData.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::AnimClassData::get_SyncGroupNames() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::AnimClassData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimClassData");
    return result;
}
void* _Script_Engine::AnimClassData::get_BakedStateMachines() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimClassData::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::Skeleton*& _Script_Engine::AnimClassData::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::StructProperty*& _Script_Engine::AnimClassData::get_RootAnimNodeProperty() {
    return *(_Script_CoreUObject::StructProperty**)((uintptr_t)this + 0x70);
}
int32_t& _Script_Engine::AnimClassData::get_RootAnimNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::AnimClassData::get_OrderedSavedPoseIndices() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::AnimClassData::get_AnimNodeProperties() {
    return (void*)((uintptr_t)this + 0x78);
}
