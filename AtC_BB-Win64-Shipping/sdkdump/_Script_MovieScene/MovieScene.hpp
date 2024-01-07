#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneSignedObject.hpp"
namespace _Script_MovieScene {
struct MovieSceneTrack;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieScene {
#pragma pack(push, 1)
struct MovieScene : public MovieSceneSignedObject {
    void* get_Spawnables();
    void* get_Possessables();
    void* get_ObjectBindings();
    void* get_MasterTracks();
    _Script_MovieScene::MovieSceneTrack*& get_CameraCutTrack();
    void* get_SelectionRange();
    void* get_PlaybackRange();
    bool get_bForceFixedFrameIntervalPlayback();
    void set_bForceFixedFrameIntervalPlayback(bool value);
    float& get_FixedFrameInterval();
    float& get_InTime();
    float& get_OutTime();
    float& get_StartTime();
    float& get_EndTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
