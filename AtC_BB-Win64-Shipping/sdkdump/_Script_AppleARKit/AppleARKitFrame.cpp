#include "..\FUObjectArray.hpp"
#include "AppleARKitFrame.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitFrame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AppleARKit.AppleARKitFrame");
    return result;
}
