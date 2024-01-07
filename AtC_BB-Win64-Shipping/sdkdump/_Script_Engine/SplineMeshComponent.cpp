#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BodySetup.hpp"
#include "SplineMeshComponent.hpp"
#include "StaticMeshComponent.hpp"
void* _Script_Engine::SplineMeshComponent::get_SplineParams() {
    return (void*)((uintptr_t)this + 0x6f8);
}
void _Script_Engine::SplineMeshComponent::SetStartTangent(_Script_CoreUObject::Vector StartTangent, bool bUpdateMesh) {
    return;
}
void* _Script_Engine::SplineMeshComponent::get_SplineUpDir() {
    return (void*)((uintptr_t)this + 0x750);
}
bool _Script_Engine::SplineMeshComponent::get_bAllowSplineEditingPerInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x75c + 0)) & 1 != 0;
}
bool _Script_Engine::SplineMeshComponent::get_bSmoothInterpRollScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x75c + 0)) & 2 != 0;
}
_Script_CoreUObject::Vector2D _Script_Engine::SplineMeshComponent::GetStartScale() {
    return;
}
void _Script_Engine::SplineMeshComponent::set_bAllowSplineEditingPerInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75c + 0);
    *(uint8_t*)((uintptr_t)this + 0x75c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SplineMeshComponent::get_SplineBoundaryMin() {
    return *(float*)((uintptr_t)this + 0x764);
}
void _Script_Engine::SplineMeshComponent::set_bSmoothInterpRollScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75c + 0);
    *(uint8_t*)((uintptr_t)this + 0x75c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SplineMeshComponent::get_ForwardAxis() {
    return (void*)((uintptr_t)this + 0x760);
}
void _Script_Engine::SplineMeshComponent::SetStartScale(_Script_CoreUObject::Vector2D StartScale, bool bUpdateMesh) {
    return;
}
float& _Script_Engine::SplineMeshComponent::get_SplineBoundaryMax() {
    return *(float*)((uintptr_t)this + 0x768);
}
_Script_Engine::BodySetup*& _Script_Engine::SplineMeshComponent::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x770);
}
void* _Script_Engine::SplineMeshComponent::get_CachedMeshBodySetupGuid() {
    return (void*)((uintptr_t)this + 0x778);
}
bool _Script_Engine::SplineMeshComponent::get_bMeshDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0x788 + 0)) & 1 != 0;
}
void _Script_Engine::SplineMeshComponent::SetEndOffset(_Script_CoreUObject::Vector2D EndOffset, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::set_bMeshDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x788 + 0);
    *(uint8_t*)((uintptr_t)this + 0x788 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SplineMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SplineMeshComponent");
    return result;
}
void _Script_Engine::SplineMeshComponent::UpdateMesh() {
    return;
}
void _Script_Engine::SplineMeshComponent::SetStartRoll(float StartRoll, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetStartPosition(_Script_CoreUObject::Vector StartPos, bool bUpdateMesh) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineMeshComponent::GetEndTangent() {
    return;
}
void _Script_Engine::SplineMeshComponent::SetStartOffset(_Script_CoreUObject::Vector2D StartOffset, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetStartAndEnd(_Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector StartTangent, _Script_CoreUObject::Vector EndPos, _Script_CoreUObject::Vector EndTangent, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetSplineUpDir(_Script_CoreUObject::Vector& InSplineUpDir, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetForwardAxis(void* InForwardAxis, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetEndTangent(_Script_CoreUObject::Vector EndTangent, bool bUpdateMesh) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineMeshComponent::GetStartPosition() {
    return;
}
void _Script_Engine::SplineMeshComponent::SetEndScale(_Script_CoreUObject::Vector2D EndScale, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetEndRoll(float EndRoll, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetEndPosition(_Script_CoreUObject::Vector EndPos, bool bUpdateMesh) {
    return;
}
void _Script_Engine::SplineMeshComponent::SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineMeshComponent::GetStartTangent() {
    return;
}
float _Script_Engine::SplineMeshComponent::GetStartRoll() {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::SplineMeshComponent::GetStartOffset() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineMeshComponent::GetSplineUpDir() {
    return;
}
void* _Script_Engine::SplineMeshComponent::GetForwardAxis() {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::SplineMeshComponent::GetEndScale() {
    return;
}
float _Script_Engine::SplineMeshComponent::GetEndRoll() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SplineMeshComponent::GetEndPosition() {
    return;
}
float _Script_Engine::SplineMeshComponent::GetBoundaryMin() {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::SplineMeshComponent::GetEndOffset() {
    return;
}
float _Script_Engine::SplineMeshComponent::GetBoundaryMax() {
    return;
}
