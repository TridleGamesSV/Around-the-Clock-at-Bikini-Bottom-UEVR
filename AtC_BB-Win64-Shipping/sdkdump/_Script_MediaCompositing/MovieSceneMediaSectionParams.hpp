#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_MediaAssets {
struct MediaSoundComponent;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_MediaAssets {
struct MediaTexture;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaCompositing {
#pragma pack(push, 1)
struct MovieSceneMediaSectionParams {
    _Script_MediaAssets::MediaSoundComponent*& get_MediaSoundComponent();
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    _Script_MediaAssets::MediaTexture*& get_MediaTexture();
    void* get_Proxy();
    float& get_SectionEndTime();
    float& get_SectionStartTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
