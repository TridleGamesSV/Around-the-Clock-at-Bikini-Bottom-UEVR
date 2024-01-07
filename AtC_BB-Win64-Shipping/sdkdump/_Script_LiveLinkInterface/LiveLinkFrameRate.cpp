#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkFrameRate.hpp"
void* _Script_LiveLinkInterface::LiveLinkFrameRate::get_Denominator() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_LiveLinkInterface::LiveLinkFrameRate::get_Numerator() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkFrameRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkFrameRate");
    return result;
}
