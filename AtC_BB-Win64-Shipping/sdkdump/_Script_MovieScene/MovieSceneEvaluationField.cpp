#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationField.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationField::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationField");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationField::get_Signature() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationField::get_Ranges() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneEvaluationField::get_Groups() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieScene::MovieSceneEvaluationField::get_MetaData() {
    return (void*)((uintptr_t)this + 0x30);
}
