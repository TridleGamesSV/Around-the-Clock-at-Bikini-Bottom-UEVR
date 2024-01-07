#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MRMeshComponent.hpp"
#include "MeshReconstructorBase.hpp"
void* _Script_MRMesh::MRMeshComponent::get_BodySetups() {
    return (void*)((uintptr_t)this + 0x680);
}
_Script_Engine::MaterialInterface*& _Script_MRMesh::MRMeshComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x668);
}
_Script_MRMesh::MeshReconstructorBase*& _Script_MRMesh::MRMeshComponent::get_MeshReconstructor() {
    return *(_Script_MRMesh::MeshReconstructorBase**)((uintptr_t)this + 0x670);
}
bool _Script_MRMesh::MRMeshComponent::get_bEnableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x678 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MRMesh::MRMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MRMeshComponent");
    return result;
}
void _Script_MRMesh::MRMeshComponent::set_bEnableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x678 + 0);
    *(uint8_t*)((uintptr_t)this + 0x678 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MRMesh::MRMeshComponent::ConnectReconstructor(_Script_MRMesh::MeshReconstructorBase* Reconstructor) {
    return;
}
_Script_MRMesh::MeshReconstructorBase* _Script_MRMesh::MRMeshComponent::GetReconstructor() {
    return;
}
