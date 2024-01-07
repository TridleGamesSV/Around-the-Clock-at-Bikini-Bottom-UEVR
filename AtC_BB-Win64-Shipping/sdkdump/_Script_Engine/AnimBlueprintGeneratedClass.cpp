#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintGeneratedClass.hpp"
#include "BlueprintGeneratedClass.hpp"
#include "Skeleton.hpp"
int32_t& _Script_Engine::AnimBlueprintGeneratedClass::get_RootAnimNodeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_BakedStateMachines() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_SyncGroupNames() {
    return (void*)((uintptr_t)this + 0x338);
}
_Script_Engine::Skeleton*& _Script_Engine::AnimBlueprintGeneratedClass::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x2f0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimBlueprintGeneratedClass");
    return result;
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_OrderedSavedPoseIndices() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x2f8);
}
