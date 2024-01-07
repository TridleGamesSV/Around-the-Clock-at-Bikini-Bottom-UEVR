#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneCaptureComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::SceneCaptureComponent::set_bCaptureEveryFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenActors() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Script_Engine::SceneCaptureComponent::get_PrimitiveRenderMode() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureEveryFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d8 + 0)) & 1 != 0;
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyComponents() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Script_Engine::SceneCaptureComponent::get_HiddenComponents() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowOnlyActors() {
    return (void*)((uintptr_t)this + 0x2c8);
}
bool _Script_Engine::SceneCaptureComponent::get_bCaptureOnMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d9 + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bCaptureOnMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SceneCaptureComponent::get_bAlwaysPersistRenderingState() {
    return (*(uint8_t*)((uintptr_t)this + 0x2da + 0)) & 1 != 0;
}
void _Script_Engine::SceneCaptureComponent::set_bAlwaysPersistRenderingState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2da + 0);
    *(uint8_t*)((uintptr_t)this + 0x2da + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SceneCaptureComponent::get_LODDistanceFactor() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::SceneCaptureComponent::get_MaxViewDistanceOverride() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
int32_t& _Script_Engine::SceneCaptureComponent::get_CaptureSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x2e4);
}
void* _Script_Engine::SceneCaptureComponent::get_ShowFlagSettings() {
    return (void*)((uintptr_t)this + 0x2e8);
}
_Script_CoreUObject::Class* _Script_Engine::SceneCaptureComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneCaptureComponent");
    return result;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ShowOnlyActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::SetCaptureSortPriority(int32_t NewCaptureSortPriority) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::RemoveShowOnlyActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideComponent(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::HideActorComponents(_Script_Engine::Actor* InActor) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearShowOnlyComponents(_Script_Engine::PrimitiveComponent* InComponent) {
    return;
}
void _Script_Engine::SceneCaptureComponent::ClearHiddenComponents() {
    return;
}
