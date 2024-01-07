#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEditorData.hpp"
void* _Script_MovieScene::MovieSceneEditorData::get_ExpansionStates() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEditorData::get_WorkingRange() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieSceneEditorData::get_ViewRange() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEditorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEditorData");
    return result;
}
