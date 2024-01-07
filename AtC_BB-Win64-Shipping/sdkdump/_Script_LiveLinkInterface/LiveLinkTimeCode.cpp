#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkTimeCode.hpp"
int32_t& _Script_LiveLinkInterface::LiveLinkTimeCode::get_Seconds() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_LiveLinkInterface::LiveLinkTimeCode::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_LiveLinkInterface::LiveLinkTimeCode::get_Frames() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTimeCode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTimeCode");
    return result;
}
