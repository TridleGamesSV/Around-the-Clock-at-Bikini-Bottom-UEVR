#include "..\FUObjectArray.hpp"
#include "ARTraceResult.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARTraceResult::get_LocalToTrackingTransform() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_AugmentedReality::ARTraceResult::get_DistanceFromCamera() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_AugmentedReality::ARTrackedGeometry*& _Script_AugmentedReality::ARTraceResult::get_TrackedGeometry() {
    return *(_Script_AugmentedReality::ARTrackedGeometry**)((uintptr_t)this + 0x40);
}
void* _Script_AugmentedReality::ARTraceResult::get_TraceChannel() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTraceResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARTraceResult");
    return result;
}
