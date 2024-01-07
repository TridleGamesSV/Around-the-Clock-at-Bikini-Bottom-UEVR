#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MediaPlaneFrustumComponent.hpp"
_Script_CoreUObject::Class* _Script_MediaCompositing::MediaPlaneFrustumComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MediaPlaneFrustumComponent");
    return result;
}
