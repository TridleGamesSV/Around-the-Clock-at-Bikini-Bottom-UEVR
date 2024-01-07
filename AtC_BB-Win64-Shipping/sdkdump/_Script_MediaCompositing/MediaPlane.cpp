#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "MediaPlane.hpp"
#include "MediaPlaneComponent.hpp"
_Script_MediaCompositing::MediaPlaneComponent*& _Script_MediaCompositing::MediaPlane::get_MediaPlane() {
    return *(_Script_MediaCompositing::MediaPlaneComponent**)((uintptr_t)this + 0x318);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MediaPlane::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MediaPlane");
    return result;
}
