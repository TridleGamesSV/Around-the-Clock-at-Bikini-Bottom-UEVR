#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneObjectBindingID.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSequencePlayer.hpp"
_Script_MovieScene::MovieSceneSequence*& _Script_MovieScene::MovieSceneSequencePlayer::get_Sequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x3d0);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlay() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_Status() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPlayReverse() {
    return (void*)((uintptr_t)this + 0x380);
}
bool _Script_MovieScene::MovieSceneSequencePlayer::get_bReversePlayback() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c4 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnFinished() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_MovieScene::MovieSceneSequencePlayer::ChangePlaybackDirection() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime) {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnStop() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding) {
    return;
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_OnPause() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_MovieScene::MovieSceneSequencePlayer::set_bReversePlayback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSequencePlayer::get_bPendingFirstUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c4 + 0)) & 2 != 0;
}
void _Script_MovieScene::MovieSceneSequencePlayer::set_bPendingFirstUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_MovieScene::MovieSceneSequencePlayer::get_TimeCursorPosition() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSequencePlayer");
    return result;
}
float& _Script_MovieScene::MovieSceneSequencePlayer::get_StartTime() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlayRate() {
    return;
}
float& _Script_MovieScene::MovieSceneSequencePlayer::get_EndTime() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
int32_t& _Script_MovieScene::MovieSceneSequencePlayer::get_CurrentNumLoops() {
    return *(int32_t*)((uintptr_t)this + 0x3e4);
}
void* _Script_MovieScene::MovieSceneSequencePlayer::get_PlaybackSettings() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void _Script_MovieScene::MovieSceneSequencePlayer::Stop() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::StartPlayingNextTick() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlayRate(float PlayRate) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Scrub() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayReverse() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::PlayLooping(int32_t NumLoops) {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Play() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::Pause() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::JumpToPosition(float NewPlaybackPosition) {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPlaying() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::IsPaused() {
    return;
}
void _Script_MovieScene::MovieSceneSequencePlayer::GoToEndAndStop() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackStart() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackPosition() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetPlaybackEnd() {
    return;
}
float _Script_MovieScene::MovieSceneSequencePlayer::GetLength() {
    return;
}
bool _Script_MovieScene::MovieSceneSequencePlayer::GetDisableCameraCuts() {
    return;
}
