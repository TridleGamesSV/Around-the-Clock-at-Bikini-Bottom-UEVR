#include "..\FUObjectArray.hpp"
#include "ARFaceGeometry.hpp"
#include "ARTrackedGeometry.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARFaceGeometry::get_BlendShapes() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARFaceGeometry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARFaceGeometry");
    return result;
}
float _Script_AugmentedReality::ARFaceGeometry::GetBlendShapeValue(void* BlendShape) {
    return;
}
void* _Script_AugmentedReality::ARFaceGeometry::GetBlendShapes() {
    return;
}
