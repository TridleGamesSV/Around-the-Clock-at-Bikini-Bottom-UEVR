#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequence.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
_Script_MovieScene::MovieScene*& _Script_LevelSequence::LevelSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x3b0);
}
void* _Script_LevelSequence::LevelSequence::get_ObjectReferences() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_LevelSequence::LevelSequence::get_BindingReferences() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequence");
    return result;
}
void* _Script_LevelSequence::LevelSequence::get_PossessedObjects() {
    return (void*)((uintptr_t)this + 0x458);
}
