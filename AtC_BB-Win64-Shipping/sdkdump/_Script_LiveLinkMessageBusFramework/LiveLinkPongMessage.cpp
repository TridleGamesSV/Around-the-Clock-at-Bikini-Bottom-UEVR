#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkPongMessage.hpp"
void* _Script_LiveLinkMessageBusFramework::LiveLinkPongMessage::get_ProviderName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkPongMessage::get_MachineName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLinkMessageBusFramework::LiveLinkPongMessage::get_PollRequest() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_LiveLinkMessageBusFramework::LiveLinkPongMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkMessageBusFramework.LiveLinkPongMessage");
    return result;
}
