#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MediaPlaneComponent.hpp"
#include "MediaPlaneParameters.hpp"
_Script_MediaCompositing::MediaPlaneParameters _Script_MediaCompositing::MediaPlaneComponent::GetPlane() {
    return;
}
void* _Script_MediaCompositing::MediaPlaneComponent::get_Plane() {
    return (void*)((uintptr_t)this + 0x660);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MediaPlaneComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MediaPlaneComponent");
    return result;
}
void _Script_MediaCompositing::MediaPlaneComponent::SetMediaPlane(_Script_MediaCompositing::MediaPlaneParameters Plane) {
    return;
}
void _Script_MediaCompositing::MediaPlaneComponent::OnMediaTextureChanged() {
    return;
}
