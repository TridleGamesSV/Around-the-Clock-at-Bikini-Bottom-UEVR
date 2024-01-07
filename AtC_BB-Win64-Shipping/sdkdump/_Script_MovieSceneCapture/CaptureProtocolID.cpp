#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CaptureProtocolID.hpp"
void* _Script_MovieSceneCapture::CaptureProtocolID::get_Identifier() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CaptureProtocolID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CaptureProtocolID");
    return result;
}
