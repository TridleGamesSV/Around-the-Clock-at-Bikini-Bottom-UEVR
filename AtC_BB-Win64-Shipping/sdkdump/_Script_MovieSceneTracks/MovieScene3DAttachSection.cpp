#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DAttachSection.hpp"
#include "MovieScene3DConstraintSection.hpp"
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_AttachSocketName() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_AttachmentScaleRule() {
    return (void*)((uintptr_t)this + 0x14a);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_AttachComponentName() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_AttachmentLocationRule() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_DetachmentLocationRule() {
    return (void*)((uintptr_t)this + 0x14b);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_AttachmentRotationRule() {
    return (void*)((uintptr_t)this + 0x149);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_DetachmentRotationRule() {
    return (void*)((uintptr_t)this + 0x14c);
}
void* _Script_MovieSceneTracks::MovieScene3DAttachSection::get_DetachmentScaleRule() {
    return (void*)((uintptr_t)this + 0x14d);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DAttachSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DAttachSection");
    return result;
}
