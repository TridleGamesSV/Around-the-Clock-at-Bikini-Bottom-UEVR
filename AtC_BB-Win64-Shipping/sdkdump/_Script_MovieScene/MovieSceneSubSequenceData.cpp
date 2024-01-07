#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSequenceData.hpp"
void* _Script_MovieScene::MovieSceneSubSequenceData::get_DeterministicSequenceID() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_Sequence() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PreRollRange() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_RootToSequenceTransform() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PlayRange() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_PostRollRange() {
    return (void*)((uintptr_t)this + 0x44);
}
int32_t& _Script_MovieScene::MovieSceneSubSequenceData::get_HierarchicalBias() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
void* _Script_MovieScene::MovieSceneSubSequenceData::get_InstanceData() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSequenceData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSequenceData");
    return result;
}
