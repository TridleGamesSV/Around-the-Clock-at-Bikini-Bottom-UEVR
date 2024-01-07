#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct PlatformMediaSource : public MediaSource {
    _Script_MediaAssets::MediaSource*& get_MediaSource();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
