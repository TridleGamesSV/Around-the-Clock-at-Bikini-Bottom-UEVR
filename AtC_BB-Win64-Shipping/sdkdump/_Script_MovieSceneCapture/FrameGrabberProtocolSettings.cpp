#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocolSettings.hpp"
#include "MovieSceneCaptureProtocolSettings.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::FrameGrabberProtocolSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.FrameGrabberProtocolSettings");
    return result;
}
