#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "StaticMeshComponent.hpp"
namespace _Script_Engine {
struct PhysicsSerializer;
}
namespace _Script_CoreUObject {
struct Box;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InstancedStaticMeshComponent : public StaticMeshComponent {
    void* get_PerInstanceSMData();
    int32_t& get_InstancingRandomSeed();
    int32_t& get_InstanceStartCullDistance();
    int32_t& get_InstanceEndCullDistance();
    void* get_InstanceReorderTable();
    void* get_RemovedInstances();
    bool get_UseDynamicInstanceBuffer();
    void set_UseDynamicInstanceBuffer(bool value);
    bool get_KeepInstanceBufferCPUAccess();
    void set_KeepInstanceBufferCPUAccess(bool value);
    _Script_Engine::PhysicsSerializer*& get_PhysicsSerializer();
    int32_t& get_NumPendingLightmaps();
    void* get_CachedMappings();
    static _Script_CoreUObject::Class* static_class();
    bool UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
    void SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance);
    bool RemoveInstance(int32_t InstanceIndex);
    bool GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace);
    void* GetInstancesOverlappingSphere(_Script_CoreUObject::Vector& Center, float Radius, bool bSphereInWorldSpace);
    void* GetInstancesOverlappingBox(_Script_CoreUObject::Box& Box, bool bBoxInWorldSpace);
    int32_t GetInstanceCount();
    void ClearInstances();
    int32_t AddInstanceWorldSpace(_Script_CoreUObject::Transform& WorldTransform);
    int32_t AddInstance(_Script_CoreUObject::Transform& InstanceTransform);
}; // Size: 0x28
#pragma pack(pop)
}
