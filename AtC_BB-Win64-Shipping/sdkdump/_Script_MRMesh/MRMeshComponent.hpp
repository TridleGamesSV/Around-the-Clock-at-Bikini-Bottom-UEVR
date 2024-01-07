#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_MRMesh {
struct MeshReconstructorBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
#pragma pack(push, 1)
struct MRMeshComponent : public _Script_Engine::PrimitiveComponent {
    _Script_Engine::MaterialInterface*& get_Material();
    _Script_MRMesh::MeshReconstructorBase*& get_MeshReconstructor();
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    void* get_BodySetups();
    static _Script_CoreUObject::Class* static_class();
    _Script_MRMesh::MeshReconstructorBase* GetReconstructor();
    void ConnectReconstructor(_Script_MRMesh::MeshReconstructorBase* Reconstructor);
}; // Size: 0x28
#pragma pack(pop)
}
