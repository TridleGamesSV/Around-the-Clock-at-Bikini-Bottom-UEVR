#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneParameterSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_ScalarParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_VectorParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSection::get_ColorParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParameterSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneParameterSection");
    return result;
}
