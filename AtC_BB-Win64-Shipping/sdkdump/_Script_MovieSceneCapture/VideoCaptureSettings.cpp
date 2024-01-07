#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocolSettings.hpp"
#include "VideoCaptureSettings.hpp"
bool _Script_MovieSceneCapture::VideoCaptureSettings::get_bUseCompression() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::VideoCaptureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.VideoCaptureSettings");
    return result;
}
void _Script_MovieSceneCapture::VideoCaptureSettings::set_bUseCompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MovieSceneCapture::VideoCaptureSettings::get_CompressionQuality() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_MovieSceneCapture::VideoCaptureSettings::get_VideoCodec() {
    return (void*)((uintptr_t)this + 0x38);
}
