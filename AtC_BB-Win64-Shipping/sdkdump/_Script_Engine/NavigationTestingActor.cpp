#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "CapsuleComponent.hpp"
#include "NavigationData.hpp"
#include "NavigationInvokerComponent.hpp"
#include "NavigationTestingActor.hpp"
_Script_Engine::CapsuleComponent*& _Script_Engine::NavigationTestingActor::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x328);
}
void* _Script_Engine::NavigationTestingActor::get_QueryingExtent() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Script_Engine::NavigationTestingActor::set_bPathIsPartial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::NavigationTestingActor::set_bActAsNavigationInvoker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338 + 0);
    *(uint8_t*)((uintptr_t)this + 0x338 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::NavigationInvokerComponent*& _Script_Engine::NavigationTestingActor::get_InvokerComponent() {
    return *(_Script_Engine::NavigationInvokerComponent**)((uintptr_t)this + 0x330);
}
void* _Script_Engine::NavigationTestingActor::get_ProjectedLocation() {
    return (void*)((uintptr_t)this + 0x378);
}
bool _Script_Engine::NavigationTestingActor::get_bActAsNavigationInvoker() {
    return (*(uint8_t*)((uintptr_t)this + 0x338 + 0)) & 1 != 0;
}
void* _Script_Engine::NavigationTestingActor::get_NavAgentProps() {
    return (void*)((uintptr_t)this + 0x340);
}
_Script_Engine::NavigationData*& _Script_Engine::NavigationTestingActor::get_MyNavData() {
    return *(_Script_Engine::NavigationData**)((uintptr_t)this + 0x370);
}
void _Script_Engine::NavigationTestingActor::set_bDrawDistanceToWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bProjectedLocationValid() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bProjectedLocationValid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bSearchStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 2 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bSearchStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::NavigationTestingActor::get_PathCost() {
    return *(float*)((uintptr_t)this + 0x39c);
}
bool _Script_Engine::NavigationTestingActor::get_bUseHierarchicalPathfinding() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 4 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bUseHierarchicalPathfinding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bGatherDetailedInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 8 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bGatherDetailedInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bDrawDistanceToWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 16 != 0;
}
bool _Script_Engine::NavigationTestingActor::get_bShowNodePool() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 32 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bShowNodePool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bShowBestPath() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 64 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bShowBestPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bShowDiffWithPreviousStep() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 128 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bPathExist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::NavigationTestingActor::set_bShowDiffWithPreviousStep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::NavigationTestingActor::get_bShouldBeVisibleInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x385 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bShouldBeVisibleInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x385 + 0);
    *(uint8_t*)((uintptr_t)this + 0x385 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::NavigationTestingActor::get_CostDisplayMode() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_Engine::NavigationTestingActor::get_TextCanvasOffset() {
    return (void*)((uintptr_t)this + 0x38c);
}
bool _Script_Engine::NavigationTestingActor::get_bPathExist() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 1 != 0;
}
bool _Script_Engine::NavigationTestingActor::get_bPathIsPartial() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 2 != 0;
}
bool _Script_Engine::NavigationTestingActor::get_bPathSearchOutOfNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x394 + 0)) & 4 != 0;
}
void _Script_Engine::NavigationTestingActor::set_bPathSearchOutOfNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x394 + 0);
    *(uint8_t*)((uintptr_t)this + 0x394 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::NavigationTestingActor::get_PathfindingTime() {
    return *(float*)((uintptr_t)this + 0x398);
}
int32_t& _Script_Engine::NavigationTestingActor::get_PathfindingSteps() {
    return *(int32_t*)((uintptr_t)this + 0x3a0);
}
_Script_Engine::NavigationTestingActor*& _Script_Engine::NavigationTestingActor::get_OtherActor() {
    return *(_Script_Engine::NavigationTestingActor**)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::NavigationTestingActor::get_FilterClass() {
    return (void*)((uintptr_t)this + 0x3b0);
}
int32_t& _Script_Engine::NavigationTestingActor::get_ShowStepIndex() {
    return *(int32_t*)((uintptr_t)this + 0x3b8);
}
float& _Script_Engine::NavigationTestingActor::get_OffsetFromCornersDistance() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationTestingActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationTestingActor");
    return result;
}
