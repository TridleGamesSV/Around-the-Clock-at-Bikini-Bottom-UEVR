#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkSourceFactory.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkSourceFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLinkInterface.LiveLinkSourceFactory");
    return result;
}
