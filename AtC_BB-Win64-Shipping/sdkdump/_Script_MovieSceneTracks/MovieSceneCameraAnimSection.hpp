#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneCameraAnimSection : public _Script_MovieScene::MovieSceneSection {
    void* get_AnimData();
    _Script_Engine::CameraAnim*& get_CameraAnim();
    float& get_PlayRate();
    float& get_PlayScale();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    bool get_bLooping();
    void set_bLooping(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
