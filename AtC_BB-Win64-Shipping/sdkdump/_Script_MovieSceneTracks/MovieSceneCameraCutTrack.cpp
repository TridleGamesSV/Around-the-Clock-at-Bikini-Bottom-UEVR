#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneCameraCutTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraCutTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0xb8);
}
