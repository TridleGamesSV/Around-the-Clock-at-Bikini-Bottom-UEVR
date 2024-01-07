#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_MovieSceneCapture {
struct MovieSceneCaptureProtocolSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct MovieSceneCapture : public _Script_CoreUObject::Object {
    void* get_CaptureType();
    _Script_MovieSceneCapture::MovieSceneCaptureProtocolSettings*& get_ProtocolSettings();
    void* get_Settings();
    bool get_bUseSeparateProcess();
    void set_bUseSeparateProcess(bool value);
    bool get_bCloseEditorWhenCaptureStarts();
    void set_bCloseEditorWhenCaptureStarts(bool value);
    void* get_AdditionalCommandLineArguments();
    void* get_InheritedCommandLineArguments();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
