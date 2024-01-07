#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkSourceSettings.hpp"
void* _Script_LiveLinkInterface::LiveLinkSourceSettings::get_InterpolationSettings() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkSourceSettings");
    return result;
}
