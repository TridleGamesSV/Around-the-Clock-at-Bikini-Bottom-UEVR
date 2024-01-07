#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkRetargetAsset.hpp"
#include "LiveLinkRetargetAssetReference.hpp"
_Script_LiveLink::LiveLinkRetargetAsset*& _Script_LiveLink::LiveLinkRetargetAssetReference::get_CurrentRetargetAsset() {
    return *(_Script_LiveLink::LiveLinkRetargetAsset**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkRetargetAssetReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.LiveLinkRetargetAssetReference");
    return result;
}
