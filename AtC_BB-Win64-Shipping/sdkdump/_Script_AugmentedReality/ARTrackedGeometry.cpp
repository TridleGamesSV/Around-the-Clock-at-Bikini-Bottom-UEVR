#include "..\FUObjectArray.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
void* _Script_AugmentedReality::ARTrackedGeometry::GetTrackingState() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_LocalToTrackingTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_LocalToAlignedTrackingTransform() {
    return (void*)((uintptr_t)this + 0x60);
}
float _Script_AugmentedReality::ARTrackedGeometry::GetLastUpdateTimestamp() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::get_TrackingState() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedGeometry");
    return result;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTrackedGeometry::GetLocalToWorldTransform() {
    return;
}
_Script_CoreUObject::Transform _Script_AugmentedReality::ARTrackedGeometry::GetLocalToTrackingTransform() {
    return;
}
int32_t _Script_AugmentedReality::ARTrackedGeometry::GetLastUpdateFrameNumber() {
    return;
}
void* _Script_AugmentedReality::ARTrackedGeometry::GetDebugName() {
    return;
}
