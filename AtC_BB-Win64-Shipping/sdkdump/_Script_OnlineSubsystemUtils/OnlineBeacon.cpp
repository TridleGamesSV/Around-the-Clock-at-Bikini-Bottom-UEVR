#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\NetDriver.hpp"
#include "OnlineBeacon.hpp"
float& _Script_OnlineSubsystemUtils::OnlineBeacon::get_BeaconConnectionInitialTimeout() {
    return *(float*)((uintptr_t)this + 0x320);
}
float& _Script_OnlineSubsystemUtils::OnlineBeacon::get_BeaconConnectionTimeout() {
    return *(float*)((uintptr_t)this + 0x324);
}
_Script_Engine::NetDriver*& _Script_OnlineSubsystemUtils::OnlineBeacon::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineBeacon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineBeacon");
    return result;
}
