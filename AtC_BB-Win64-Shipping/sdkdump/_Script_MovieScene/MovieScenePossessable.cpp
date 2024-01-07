#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePossessable.hpp"
void* _Script_MovieScene::MovieScenePossessable::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieScenePossessable::get_ParentGuid() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_MovieScene::MovieScenePossessable::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScenePossessable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieScenePossessable");
    return result;
}
void* _Script_MovieScene::MovieScenePossessable::get_PossessedObjectClass() {
    return (void*)((uintptr_t)this + 0x20);
}
