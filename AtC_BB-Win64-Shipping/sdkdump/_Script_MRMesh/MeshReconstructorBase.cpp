#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MRMeshComponent.hpp"
#include "MRMeshConfiguration.hpp"
#include "MeshReconstructorBase.hpp"
_Script_MRMesh::MRMeshConfiguration _Script_MRMesh::MeshReconstructorBase::ConnectMRMesh(_Script_MRMesh::MRMeshComponent* Mesh) {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::StartReconstruction() {
    return;
}
_Script_CoreUObject::Class* _Script_MRMesh::MeshReconstructorBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MeshReconstructorBase");
    return result;
}
void _Script_MRMesh::MeshReconstructorBase::DisconnectMRMesh() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::StopReconstruction() {
    return;
}
void _Script_MRMesh::MeshReconstructorBase::PauseReconstruction() {
    return;
}
bool _Script_MRMesh::MeshReconstructorBase::IsReconstructionStarted() {
    return;
}
bool _Script_MRMesh::MeshReconstructorBase::IsReconstructionPaused() {
    return;
}
