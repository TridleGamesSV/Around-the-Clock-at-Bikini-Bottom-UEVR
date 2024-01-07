#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
#include "MovieSceneSpawnTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSpawnTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSpawnTrack");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneSpawnTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_MovieSceneTracks::MovieSceneSpawnTrack::get_ObjectGuid() {
    return (void*)((uintptr_t)this + 0xc8);
}
