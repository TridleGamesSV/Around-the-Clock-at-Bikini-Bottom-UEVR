#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_ProceduralMeshComponent\ProceduralMeshComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AppleARKit {
#pragma pack(push, 1)
struct AppleARKitFaceMeshComponent : public _Script_ProceduralMeshComponent::ProceduralMeshComponent {
    bool get_bWantsCollision();
    void set_bWantsCollision(bool value);
    bool get_bAutoBindToLocalFaceMesh();
    void set_bAutoBindToLocalFaceMesh(bool value);
    void* get_TransformSetting();
    bool get_bFlipTrackedRotation();
    void set_bFlipTrackedRotation(bool value);
    _Script_Engine::MaterialInterface*& get_FaceMaterial();
    void* get_LiveLinkSubjectName();
    static _Script_CoreUObject::Class* static_class();
    void UpdateMeshFromBlendShapes();
    void UpdateMesh(void*& Vertices);
    void SetBlendShapes(void*& InBlendShapes);
    void SetBlendShapeAmount(void* BlendShape, float Amount);
    void SetAutoBind(bool bAutoBind);
    void PublishViaLiveLink(void* SubjectName);
    _Script_CoreUObject::Transform GetTransform();
    float GetLastUpdateTimestamp();
    int32_t GetLastUpdateFrameNumber();
    float GetFaceBlendShapeAmount(void* BlendShape);
    void CreateMesh(void*& Vertices, void*& Triangles, void*& UV0);
}; // Size: 0x28
#pragma pack(pop)
}
