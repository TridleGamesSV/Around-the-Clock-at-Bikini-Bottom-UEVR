#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
#include "LiveLinkInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.LiveLinkInstanceProxy");
    return result;
}
