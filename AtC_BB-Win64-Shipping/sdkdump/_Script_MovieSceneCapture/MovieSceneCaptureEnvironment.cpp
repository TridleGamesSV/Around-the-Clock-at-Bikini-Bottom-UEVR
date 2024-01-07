#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneCaptureEnvironment.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment");
    return result;
}
int32_t _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::GetCaptureFrameNumber() {
    return;
}
float _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::GetCaptureElapsedTime() {
    return;
}
