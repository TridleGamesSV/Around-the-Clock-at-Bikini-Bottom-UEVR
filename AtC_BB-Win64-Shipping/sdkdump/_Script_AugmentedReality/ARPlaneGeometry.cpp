#include "..\FUObjectArray.hpp"
#include "ARPlaneGeometry.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
void* _Script_AugmentedReality::ARPlaneGeometry::get_Center() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Vector _Script_AugmentedReality::ARPlaneGeometry::GetCenter() {
    return;
}
_Script_AugmentedReality::ARPlaneGeometry*& _Script_AugmentedReality::ARPlaneGeometry::get_SubsumedBy() {
    return *(_Script_AugmentedReality::ARPlaneGeometry**)((uintptr_t)this + 0xf0);
}
void* _Script_AugmentedReality::ARPlaneGeometry::get_Extent() {
    return (void*)((uintptr_t)this + 0xd4);
}
_Script_CoreUObject::Vector _Script_AugmentedReality::ARPlaneGeometry::GetExtent() {
    return;
}
void* _Script_AugmentedReality::ARPlaneGeometry::get_BoundaryPolygon() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARPlaneGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARPlaneGeometry");
    return result;
}
_Script_AugmentedReality::ARPlaneGeometry* _Script_AugmentedReality::ARPlaneGeometry::GetSubsumedBy() {
    return;
}
void* _Script_AugmentedReality::ARPlaneGeometry::GetBoundaryPolygonInLocalSpace() {
    return;
}
