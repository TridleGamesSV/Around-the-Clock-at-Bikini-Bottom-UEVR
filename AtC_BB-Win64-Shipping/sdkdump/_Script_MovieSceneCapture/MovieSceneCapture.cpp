#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneCapture.hpp"
#include "MovieSceneCaptureProtocolSettings.hpp"
void* _Script_MovieSceneCapture::MovieSceneCapture::get_CaptureType() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_MovieSceneCapture::MovieSceneCaptureProtocolSettings*& _Script_MovieSceneCapture::MovieSceneCapture::get_ProtocolSettings() {
    return *(_Script_MovieSceneCapture::MovieSceneCaptureProtocolSettings**)((uintptr_t)this + 0x40);
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_AdditionalCommandLineArguments() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_Settings() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_MovieSceneCapture::MovieSceneCapture::get_bUseSeparateProcess() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::MovieSceneCapture::set_bUseSeparateProcess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneCapture::MovieSceneCapture::set_bCloseEditorWhenCaptureStarts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneCapture::MovieSceneCapture::get_bCloseEditorWhenCaptureStarts() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_InheritedCommandLineArguments() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCapture");
    return result;
}
