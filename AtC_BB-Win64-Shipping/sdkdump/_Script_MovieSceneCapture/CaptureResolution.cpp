#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CaptureResolution.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CaptureResolution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CaptureResolution");
    return result;
}
void* _Script_MovieSceneCapture::CaptureResolution::get_ResX() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneCapture::CaptureResolution::get_ResY() {
    return (void*)((uintptr_t)this + 0x4);
}
