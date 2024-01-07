#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_MediaAssets {
struct MediaSoundComponent;
}
namespace _Script_MediaAssets {
struct MediaTexture;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MovieSceneMediaSection : public _Script_MovieScene::MovieSceneSection {
    void* get_Proxy();
    _Script_MediaAssets::MediaSoundComponent*& get_MediaSoundComponent();
    _Script_MediaAssets::MediaTexture*& get_MediaTexture();
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
