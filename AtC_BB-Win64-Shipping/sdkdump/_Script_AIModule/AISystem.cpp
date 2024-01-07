#include "..\FUObjectArray.hpp"
#include "AIHotSpotManager.hpp"
#include "AIPerceptionSystem.hpp"
#include "AISystem.hpp"
#include "BehaviorTreeManager.hpp"
#include "EnvQueryManager.hpp"
#include "NavLocalGridManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AISystemBase.hpp"
void* _Script_AIModule::AISystem::get_PerceptionSystemClassName() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_AIModule::AISystem::get_bAcceptPartialPaths() {
    return (*(uint8_t*)((uintptr_t)this + 0x8d + 0)) & 1 != 0;
}
void* _Script_AIModule::AISystem::get_HotSpotManagerClassName() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_AIModule::AISystem::set_bAllowStrafing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::AISystem::set_bFinishMoveOnGoalOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::AISystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISystem");
    return result;
}
float& _Script_AIModule::AISystem::get_AcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_AIModule::AISystem::get_PathfollowingRegularPathPointAcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x84);
}
bool _Script_AIModule::AISystem::get_bFinishMoveOnGoalOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
float& _Script_AIModule::AISystem::get_PathfollowingNavLinkAcceptanceRadius() {
    return *(float*)((uintptr_t)this + 0x88);
}
void _Script_AIModule::AISystem::set_bAcceptPartialPaths(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8d + 0);
    *(uint8_t*)((uintptr_t)this + 0x8d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bAllowStrafing() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e + 0)) & 1 != 0;
}
bool _Script_AIModule::AISystem::get_bEnableBTAITasks() {
    return (*(uint8_t*)((uintptr_t)this + 0x8f + 0)) & 1 != 0;
}
void _Script_AIModule::AISystem::set_bEnableBTAITasks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8f + 0);
    *(uint8_t*)((uintptr_t)this + 0x8f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bAllowControllersAsEQSQuerier() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_AIModule::AISystem::set_bAllowControllersAsEQSQuerier(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::AISystem::get_bEnableDebuggerPlugin() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
_Script_AIModule::BehaviorTreeManager*& _Script_AIModule::AISystem::get_BehaviorTreeManager() {
    return *(_Script_AIModule::BehaviorTreeManager**)((uintptr_t)this + 0x98);
}
void _Script_AIModule::AISystem::set_bEnableDebuggerPlugin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AIModule::AISystem::get_DefaultSightCollisionChannel() {
    return (void*)((uintptr_t)this + 0x92);
}
_Script_AIModule::EnvQueryManager*& _Script_AIModule::AISystem::get_EnvironmentQueryManager() {
    return *(_Script_AIModule::EnvQueryManager**)((uintptr_t)this + 0xa0);
}
_Script_AIModule::AIPerceptionSystem*& _Script_AIModule::AISystem::get_PerceptionSystem() {
    return *(_Script_AIModule::AIPerceptionSystem**)((uintptr_t)this + 0xa8);
}
void* _Script_AIModule::AISystem::get_AllProxyObjects() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_AIModule::AIHotSpotManager*& _Script_AIModule::AISystem::get_HotSpotManager() {
    return *(_Script_AIModule::AIHotSpotManager**)((uintptr_t)this + 0xc0);
}
_Script_AIModule::NavLocalGridManager*& _Script_AIModule::AISystem::get_NavLocalGrids() {
    return *(_Script_AIModule::NavLocalGridManager**)((uintptr_t)this + 0xc8);
}
void _Script_AIModule::AISystem::AILoggingVerbose() {
    return;
}
void _Script_AIModule::AISystem::AIIgnorePlayers() {
    return;
}
