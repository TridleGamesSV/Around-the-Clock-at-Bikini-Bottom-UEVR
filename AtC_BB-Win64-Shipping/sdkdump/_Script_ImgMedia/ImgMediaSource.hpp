#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MediaAssets\BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ImgMedia {
#pragma pack(push, 1)
struct ImgMediaSource : public _Script_MediaAssets::BaseMediaSource {
    float& get_FramesPerSecondOverride();
    void* get_ProxyOverride();
    void* get_SequencePath();
    static _Script_CoreUObject::Class* static_class();
    void SetSequencePath(void* Path);
    void* GetSequencePath();
    void GetProxies(void*& OutProxies);
}; // Size: 0x28
#pragma pack(pop)
}
