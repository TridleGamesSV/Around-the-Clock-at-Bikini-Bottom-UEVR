#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "FrameGrabberProtocolSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct VideoCaptureSettings : public FrameGrabberProtocolSettings {
    bool get_bUseCompression();
    void set_bUseCompression(bool value);
    float& get_CompressionQuality();
    void* get_VideoCodec();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
