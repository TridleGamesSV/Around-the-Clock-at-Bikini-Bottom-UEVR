#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneObjectBindingID.hpp"
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieSceneSequencePlayer : public _Script_CoreUObject::Object {
    void* get_OnPlay();
    void* get_OnPlayReverse();
    void* get_OnStop();
    void* get_OnPause();
    void* get_OnFinished();
    void* get_Status();
    bool get_bReversePlayback();
    void set_bReversePlayback(bool value);
    bool get_bPendingFirstUpdate();
    void set_bPendingFirstUpdate(bool value);
    _Script_MovieScene::MovieSceneSequence*& get_Sequence();
    float& get_TimeCursorPosition();
    float& get_StartTime();
    float& get_EndTime();
    int32_t& get_CurrentNumLoops();
    void* get_PlaybackSettings();
    static _Script_CoreUObject::Class* static_class();
    void Stop();
    void StartPlayingNextTick();
    void SetPlayRate(float PlayRate);
    void SetPlaybackRange(float NewStartTime, float NewEndTime);
    void SetPlaybackPosition(float NewPlaybackPosition);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void Scrub();
    void PlayReverse();
    void PlayLooping(int32_t NumLoops);
    void Play();
    void Pause();
    void JumpToPosition(float NewPlaybackPosition);
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    float GetPlayRate();
    float GetPlaybackStart();
    float GetPlaybackPosition();
    float GetPlaybackEnd();
    float GetLength();
    bool GetDisableCameraCuts();
    void* GetBoundObjects(_Script_MovieScene::MovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x28
#pragma pack(pop)
}
