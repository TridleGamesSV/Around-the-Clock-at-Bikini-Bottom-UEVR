#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BaseMediaSource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct StreamMediaSource : public BaseMediaSource {
    void* get_StreamUrl();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
