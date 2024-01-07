#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InstancedStaticMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HierarchicalInstancedStaticMeshComponent : public InstancedStaticMeshComponent {
    void* get_SortedInstances();
    int32_t& get_NumBuiltInstances();
    void* get_BuiltInstanceBounds();
    void* get_UnbuiltInstanceBounds();
    void* get_UnbuiltInstanceBoundsList();
    void* get_UnbuiltInstanceIndexList();
    bool get_bEnableDensityScaling();
    void set_bEnableDensityScaling(bool value);
    int32_t& get_OcclusionLayerNumNodes();
    void* get_CacheMeshExtendedBounds();
    bool get_bDisableCollision();
    void set_bDisableCollision(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool RemoveInstances(void*& InstancesToRemove);
}; // Size: 0x28
#pragma pack(pop)
}
