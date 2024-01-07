#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "LiveLinkInstance.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkInstance");
    return result;
}
