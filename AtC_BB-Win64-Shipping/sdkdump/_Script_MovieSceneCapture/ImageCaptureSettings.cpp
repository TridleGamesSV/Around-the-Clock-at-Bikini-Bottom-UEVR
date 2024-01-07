#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocolSettings.hpp"
#include "ImageCaptureSettings.hpp"
int32_t& _Script_MovieSceneCapture::ImageCaptureSettings::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageCaptureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageCaptureSettings");
    return result;
}
