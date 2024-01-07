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
struct ImageCaptureSettings : public FrameGrabberProtocolSettings {
    int32_t& get_CompressionQuality();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
