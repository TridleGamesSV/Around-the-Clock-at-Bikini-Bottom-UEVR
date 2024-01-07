#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BmpImageCaptureSettings.hpp"
#include "MovieSceneCaptureProtocolSettings.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::BmpImageCaptureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.BmpImageCaptureSettings");
    return result;
}
