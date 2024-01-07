#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieScene3DTransformSection.hpp"
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_TransformMask() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DTransformSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DTransformSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Rotation() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Translation() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_Scale() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_MovieSceneTracks::MovieScene3DTransformSection::get_ManualWeight() {
    return (void*)((uintptr_t)this + 0x510);
}
