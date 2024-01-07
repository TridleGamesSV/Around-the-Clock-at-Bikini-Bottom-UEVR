#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "GeometryCache.hpp"
#include "GeometryCacheComponent.hpp"
_Script_GeometryCache::GeometryCache*& _Script_GeometryCache::GeometryCacheComponent::get_GeometryCache() {
    return *(_Script_GeometryCache::GeometryCache**)((uintptr_t)this + 0x688);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_PlaybackSpeed() {
    return *(float*)((uintptr_t)this + 0x698);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x691 + 0);
    *(uint8_t*)((uintptr_t)this + 0x691 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bRunning() {
    return (*(uint8_t*)((uintptr_t)this + 0x690 + 0)) & 1 != 0;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsLooping() {
    return;
}
int32_t& _Script_GeometryCache::GeometryCacheComponent::get_NumTracks() {
    return *(int32_t*)((uintptr_t)this + 0x69c);
}
void _Script_GeometryCache::GeometryCacheComponent::set_bRunning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x690 + 0);
    *(uint8_t*)((uintptr_t)this + 0x690 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_GeometryCache::GeometryCacheComponent::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x691 + 0)) & 1 != 0;
}
void _Script_GeometryCache::GeometryCacheComponent::SetLooping(bool bNewLooping) {
    return;
}
float& _Script_GeometryCache::GeometryCacheComponent::get_StartTimeOffset() {
    return *(float*)((uintptr_t)this + 0x694);
}
float& _Script_GeometryCache::GeometryCacheComponent::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0x6a0);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCacheComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCacheComponent");
    return result;
}
void _Script_GeometryCache::GeometryCacheComponent::Pause() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Stop() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::SetGeometryCache(_Script_GeometryCache::GeometryCache* NewGeomCache) {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversedFromEnd() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayReversed() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::PlayFromStart() {
    return;
}
void _Script_GeometryCache::GeometryCacheComponent::Play() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlayingReversed() {
    return;
}
bool _Script_GeometryCache::GeometryCacheComponent::IsPlaying() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetStartTimeOffset() {
    return;
}
float _Script_GeometryCache::GeometryCacheComponent::GetPlaybackSpeed() {
    return;
}
