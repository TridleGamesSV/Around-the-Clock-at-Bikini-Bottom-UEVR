#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSignedObject.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequence");
    return result;
}
void* _Script_MovieScene::MovieSceneSequence::get_PrecompiledEvaluationTemplate() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Script_MovieScene::MovieSceneSequence::get_bParentContextsAreSignificant() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a9 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSequence::get_DefaultCompletionMode() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Script_MovieScene::MovieSceneSequence::set_bParentContextsAreSignificant(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
