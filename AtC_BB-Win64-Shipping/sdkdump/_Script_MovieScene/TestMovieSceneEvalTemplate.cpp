#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplate.hpp"
#include "TestMovieSceneEvalTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneEvalTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.TestMovieSceneEvalTemplate");
    return result;
}
