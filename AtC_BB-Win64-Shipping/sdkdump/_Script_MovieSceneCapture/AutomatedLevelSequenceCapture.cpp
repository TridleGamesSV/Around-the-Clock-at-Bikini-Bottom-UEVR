#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AutomatedLevelSequenceCapture.hpp"
#include "MovieSceneCapture.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::AutomatedLevelSequenceCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.AutomatedLevelSequenceCapture");
    return result;
}
