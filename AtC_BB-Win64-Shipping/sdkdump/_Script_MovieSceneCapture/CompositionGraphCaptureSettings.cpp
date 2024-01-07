#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompositionGraphCaptureSettings.hpp"
#include "MovieSceneCaptureProtocolSettings.hpp"
void* _Script_MovieSceneCapture::CompositionGraphCaptureSettings::get_IncludeRenderPasses() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_MovieSceneCapture::CompositionGraphCaptureSettings::get_bCaptureFramesInHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::CompositionGraphCaptureSettings::set_bCaptureFramesInHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieSceneCapture::CompositionGraphCaptureSettings::get_HDRCompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CompositionGraphCaptureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.CompositionGraphCaptureSettings");
    return result;
}
void* _Script_MovieSceneCapture::CompositionGraphCaptureSettings::get_CaptureGamut() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieSceneCapture::CompositionGraphCaptureSettings::get_PostProcessingMaterial() {
    return (void*)((uintptr_t)this + 0x48);
}
