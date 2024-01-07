#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneSegmentCompilerTestSection.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSegmentCompilerTestSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSegmentCompilerTestSection");
    return result;
}
