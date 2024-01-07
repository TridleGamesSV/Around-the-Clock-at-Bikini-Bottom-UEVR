#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelSequence.hpp"
#include "LevelSequenceActor.hpp"
#include "LevelSequencePlayer.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlaybackSettings.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequencePlayer");
    return result;
}
void* _Script_LevelSequence::LevelSequencePlayer::get_OnCameraCut() {
    return (void*)((uintptr_t)this + 0x7f8);
}
void* _Script_LevelSequence::LevelSequencePlayer::get_AdditionalEventReceivers() {
    return (void*)((uintptr_t)this + 0x838);
}
_Script_LevelSequence::LevelSequencePlayer* _Script_LevelSequence::LevelSequencePlayer::CreateLevelSequencePlayer(_Script_CoreUObject::Object* WorldContextObject, _Script_LevelSequence::LevelSequence* LevelSequence, _Script_MovieScene::MovieSceneSequencePlaybackSettings Settings, _Script_LevelSequence::LevelSequenceActor*& OutActor) {
    return;
}
