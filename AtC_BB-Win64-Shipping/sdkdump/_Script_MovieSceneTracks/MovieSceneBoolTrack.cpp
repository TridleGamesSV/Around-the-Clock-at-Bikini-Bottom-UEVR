#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneBoolTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneBoolTrack");
    return result;
}
