#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "Controller.hpp"
#include "NavMeshBoundsVolume.hpp"
#include "NavigationData.hpp"
#include "NavigationPath.hpp"
#include "NavigationSystem.hpp"
bool _Script_Engine::NavigationSystem::get_bSupportRebuilding() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 4 != 0;
}
bool _Script_Engine::NavigationSystem::IsNavigationBeingBuiltOrLocked(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::NavigationData*& _Script_Engine::NavigationSystem::get_MainNavData() {
    return *(_Script_Engine::NavigationData**)((uintptr_t)this + 0x28);
}
void _Script_Engine::NavigationSystem::set_bSupportRebuilding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavigationSystem::get_bAllowClientSideNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 2 != 0;
}
_Script_Engine::NavigationData*& _Script_Engine::NavigationSystem::get_AbstractNavData() {
    return *(_Script_Engine::NavigationData**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::NavigationSystem::get_CrowdManagerClass() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::NavigationSystem::set_bSkipAgentHeightCheckWhenPickingNavData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavigationSystem::get_bAutoCreateNavigationData() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationSystem::set_bAutoCreateNavigationData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavigationSystem::set_bAllowClientSideNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavigationSystem::get_bInitialBuildingLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 8 != 0;
}
void _Script_Engine::NavigationSystem::set_bInitialBuildingLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavigationSystem::get_bSkipAgentHeightCheckWhenPickingNavData() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 32 != 0;
}
void* _Script_Engine::NavigationSystem::get_DataGatheringMode() {
    return (void*)((uintptr_t)this + 0x44);
}
bool _Script_Engine::NavigationSystem::get_bGenerateNavigationOnlyAroundNavigationInvokers() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationSystem::set_bGenerateNavigationOnlyAroundNavigationInvokers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::NavigationSystem::get_ActiveTilesUpdateInterval() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::NavigationSystem::get_SupportedAgents() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::NavigationSystem::get_DirtyAreasUpdateFreq() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::NavigationSystem::get_NavDataSet() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::NavigationSystem::get_NavDataRegistrationQueue() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::NavigationSystem::get_OnNavDataRegisteredEvent() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::NavigationSystem::get_OnNavigationGenerationFinishedDelegate() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_Engine::NavigationSystem::get_OperationMode() {
    return (void*)((uintptr_t)this + 0x234);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationSystem");
    return result;
}
void _Script_Engine::NavigationSystem::UnregisterNavigationInvoker(_Script_Engine::Actor* Invoker) {
    return;
}
void _Script_Engine::NavigationSystem::SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal) {
    return;
}
void _Script_Engine::NavigationSystem::SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal) {
    return;
}
void _Script_Engine::NavigationSystem::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs) {
    return;
}
void _Script_Engine::NavigationSystem::SetGeometryGatheringMode(void* NewMode) {
    return;
}
void _Script_Engine::NavigationSystem::ResetMaxSimultaneousTileGenerationJobsCount() {
    return;
}
void _Script_Engine::NavigationSystem::RegisterNavigationInvoker(_Script_Engine::Actor* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::NavigationSystem::ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_Engine::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent) {
    return;
}
void _Script_Engine::NavigationSystem::OnNavigationBoundsUpdated(_Script_Engine::NavMeshBoundsVolume* NavVolume) {
    return;
}
bool _Script_Engine::NavigationSystem::NavigationRaycast(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& RayStart, _Script_CoreUObject::Vector& RayEnd, _Script_CoreUObject::Vector& HitLocation, void* FilterClass, _Script_Engine::Controller* Querier) {
    return;
}
bool _Script_Engine::NavigationSystem::K2_ProjectPointToNavigation(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& ProjectedLocation, _Script_Engine::NavigationData* NavData, void* FilterClass, _Script_CoreUObject::Vector QueryExtent) {
    return;
}
bool _Script_Engine::NavigationSystem::K2_GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_Engine::NavigationSystem::K2_GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, _Script_CoreUObject::Vector& RandomLocation, float Radius, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
bool _Script_Engine::NavigationSystem::IsNavigationBeingBuilt(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::NavigationSystem::GetRandomReachablePointInRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::NavigationSystem::GetRandomPointInNavigableRadius(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& Origin, float Radius, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_Engine::NavigationSystem::GetPathLength(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathLength, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
void* _Script_Engine::NavigationSystem::GetPathCost(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, float& PathCost, _Script_Engine::NavigationData* NavData, void* FilterClass) {
    return;
}
_Script_Engine::NavigationSystem* _Script_Engine::NavigationSystem::GetNavigationSystem(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_Engine::NavigationPath* _Script_Engine::NavigationSystem::FindPathToLocationSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_CoreUObject::Vector& PathEnd, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
_Script_Engine::NavigationPath* _Script_Engine::NavigationSystem::FindPathToActorSynchronously(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector& PathStart, _Script_Engine::Actor* GoalActor, float TetherDistance, _Script_Engine::Actor* PathfindingContext, void* FilterClass) {
    return;
}
