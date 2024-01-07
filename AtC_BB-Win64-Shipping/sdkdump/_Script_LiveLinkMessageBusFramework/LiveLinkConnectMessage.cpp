#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkConnectMessage.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkConnectMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkConnectMessage");
    return result;
}
