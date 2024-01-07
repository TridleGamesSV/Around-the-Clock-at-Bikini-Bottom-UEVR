#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlayerReservation.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PlayerReservation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/OnlineSubsystemUtils.PlayerReservation");
    return result;
}
void* _Script_OnlineSubsystemUtils::PlayerReservation::get_UniqueId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_OnlineSubsystemUtils::PlayerReservation::get_ValidationStr() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_OnlineSubsystemUtils::PlayerReservation::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
