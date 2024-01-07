#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkVirtualSubject.hpp"
void* _Script_LiveLink::LiveLinkVirtualSubject::get_Subjects() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLink::LiveLinkVirtualSubject::get_Source() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkVirtualSubject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.LiveLinkVirtualSubject");
    return result;
}
