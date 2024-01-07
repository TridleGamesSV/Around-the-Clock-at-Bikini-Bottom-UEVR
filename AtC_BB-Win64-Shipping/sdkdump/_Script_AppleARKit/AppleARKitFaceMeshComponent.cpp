#include "..\FUObjectArray.hpp"
#include "AppleARKitFaceMeshComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_ProceduralMeshComponent\ProceduralMeshComponent.hpp"
void _Script_AppleARKit::AppleARKitFaceMeshComponent::SetBlendShapeAmount(void* BlendShape, float Amount) {
    return;
}
bool _Script_AppleARKit::AppleARKitFaceMeshComponent::get_bFlipTrackedRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f3 + 0)) & 1 != 0;
}
bool _Script_AppleARKit::AppleARKitFaceMeshComponent::get_bWantsCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f0 + 0)) & 1 != 0;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::set_bWantsCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::set_bFlipTrackedRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AppleARKit::AppleARKitFaceMeshComponent::get_TransformSetting() {
    return (void*)((uintptr_t)this + 0x6f2);
}
bool _Script_AppleARKit::AppleARKitFaceMeshComponent::get_bAutoBindToLocalFaceMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x6f1 + 0)) & 1 != 0;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::set_bAutoBindToLocalFaceMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInterface*& _Script_AppleARKit::AppleARKitFaceMeshComponent::get_FaceMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x6f8);
}
void* _Script_AppleARKit::AppleARKitFaceMeshComponent::get_LiveLinkSubjectName() {
    return (void*)((uintptr_t)this + 0x700);
}
_Script_CoreUObject::Class* _Script_AppleARKit::AppleARKitFaceMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AppleARKit.AppleARKitFaceMeshComponent");
    return result;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::UpdateMeshFromBlendShapes() {
    return;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::UpdateMesh(void*& Vertices) {
    return;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::SetBlendShapes(void*& InBlendShapes) {
    return;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::SetAutoBind(bool bAutoBind) {
    return;
}
float _Script_AppleARKit::AppleARKitFaceMeshComponent::GetFaceBlendShapeAmount(void* BlendShape) {
    return;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::PublishViaLiveLink(void* SubjectName) {
    return;
}
_Script_CoreUObject::Transform _Script_AppleARKit::AppleARKitFaceMeshComponent::GetTransform() {
    return;
}
float _Script_AppleARKit::AppleARKitFaceMeshComponent::GetLastUpdateTimestamp() {
    return;
}
int32_t _Script_AppleARKit::AppleARKitFaceMeshComponent::GetLastUpdateFrameNumber() {
    return;
}
void _Script_AppleARKit::AppleARKitFaceMeshComponent::CreateMesh(void*& Vertices, void*& Triangles, void*& UV0) {
    return;
}
