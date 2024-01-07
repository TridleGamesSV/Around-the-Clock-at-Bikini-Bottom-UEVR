#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameNetworkManager.hpp"
#include "Info.hpp"
void _Script_Engine::GameNetworkManager::set_bUseDistanceBasedRelevancy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x391 + 0);
    *(uint8_t*)((uintptr_t)this + 0x391 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::GameNetworkManager::get_AdjustedNetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x318);
}
int32_t& _Script_Engine::GameNetworkManager::get_MinDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x324);
}
void _Script_Engine::GameNetworkManager::set_bIsStandbyCheckingEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x32c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyForceCorrectionsDuringResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x390 + 0)) & 1 != 0;
}
float& _Script_Engine::GameNetworkManager::get_LastNetSpeedUpdateTime() {
    return *(float*)((uintptr_t)this + 0x31c);
}
bool _Script_Engine::GameNetworkManager::get_bHasStandbyCheatTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x32c + 0)) & 2 != 0;
}
int32_t& _Script_Engine::GameNetworkManager::get_MaxDynamicBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x328);
}
int32_t& _Script_Engine::GameNetworkManager::get_TotalNetBandwidth() {
    return *(int32_t*)((uintptr_t)this + 0x320);
}
float& _Script_Engine::GameNetworkManager::get_JoinInProgressStandbyWaitTime() {
    return *(float*)((uintptr_t)this + 0x348);
}
bool _Script_Engine::GameNetworkManager::get_bIsStandbyCheckingEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x32c + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_bHasStandbyCheatTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32c + 0);
    *(uint8_t*)((uintptr_t)this + 0x32c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::GameNetworkManager::get_StandbyRxCheatTime() {
    return *(float*)((uintptr_t)this + 0x330);
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyForceCorrectionsDuringResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x390 + 0);
    *(uint8_t*)((uintptr_t)this + 0x390 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_StandbyTxCheatTime() {
    return *(float*)((uintptr_t)this + 0x334);
}
int32_t& _Script_Engine::GameNetworkManager::get_BadPingThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x338);
}
float& _Script_Engine::GameNetworkManager::get_PercentMissingForRxStandby() {
    return *(float*)((uintptr_t)this + 0x33c);
}
float& _Script_Engine::GameNetworkManager::get_PercentMissingForTxStandby() {
    return *(float*)((uintptr_t)this + 0x340);
}
float& _Script_Engine::GameNetworkManager::get_PercentForBadPing() {
    return *(float*)((uintptr_t)this + 0x344);
}
float& _Script_Engine::GameNetworkManager::get_MoveRepSize() {
    return *(float*)((uintptr_t)this + 0x34c);
}
float& _Script_Engine::GameNetworkManager::get_MAXPOSITIONERRORSQUARED() {
    return *(float*)((uintptr_t)this + 0x350);
}
float& _Script_Engine::GameNetworkManager::get_MAXNEARZEROVELOCITYSQUARED() {
    return *(float*)((uintptr_t)this + 0x354);
}
float& _Script_Engine::GameNetworkManager::get_CLIENTADJUSTUPDATECOST() {
    return *(float*)((uintptr_t)this + 0x358);
}
float& _Script_Engine::GameNetworkManager::get_MAXCLIENTUPDATEINTERVAL() {
    return *(float*)((uintptr_t)this + 0x35c);
}
float& _Script_Engine::GameNetworkManager::get_MaxMoveDeltaTime() {
    return *(float*)((uintptr_t)this + 0x360);
}
float& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveDeltaTime() {
    return *(float*)((uintptr_t)this + 0x364);
}
float& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveDeltaTimeThrottled() {
    return *(float*)((uintptr_t)this + 0x368);
}
int32_t& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveThrottleAtNetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x36c);
}
int32_t& _Script_Engine::GameNetworkManager::get_ClientNetSendMoveThrottleOverPlayerCount() {
    return *(int32_t*)((uintptr_t)this + 0x370);
}
bool _Script_Engine::GameNetworkManager::get_ClientAuthorativePosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_ClientAuthorativePosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_ClientErrorUpdateRateLimit() {
    return *(float*)((uintptr_t)this + 0x378);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyDetection() {
    return (*(uint8_t*)((uintptr_t)this + 0x37c + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyDetection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37c + 0);
    *(uint8_t*)((uintptr_t)this + 0x37c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GameNetworkManager::get_bMovementTimeDiscrepancyResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x37d + 0)) & 1 != 0;
}
void _Script_Engine::GameNetworkManager::set_bMovementTimeDiscrepancyResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37d + 0);
    *(uint8_t*)((uintptr_t)this + 0x37d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyMaxTimeMargin() {
    return *(float*)((uintptr_t)this + 0x380);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyMinTimeMargin() {
    return *(float*)((uintptr_t)this + 0x384);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyResolutionRate() {
    return *(float*)((uintptr_t)this + 0x388);
}
float& _Script_Engine::GameNetworkManager::get_MovementTimeDiscrepancyDriftAllowance() {
    return *(float*)((uintptr_t)this + 0x38c);
}
bool _Script_Engine::GameNetworkManager::get_bUseDistanceBasedRelevancy() {
    return (*(uint8_t*)((uintptr_t)this + 0x391 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::GameNetworkManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.GameNetworkManager");
    return result;
}
