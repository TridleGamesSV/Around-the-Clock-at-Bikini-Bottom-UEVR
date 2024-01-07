#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalInstancedStaticMeshComponent.hpp"
#include "InstancedStaticMeshComponent.hpp"
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bEnableDensityScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x858 + 0)) & 1 != 0;
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_SortedInstances() {
    return (void*)((uintptr_t)this + 0x7e8);
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_NumBuiltInstances() {
    return *(int32_t*)((uintptr_t)this + 0x7f8);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_BuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0x800);
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bEnableDensityScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x858 + 0);
    *(uint8_t*)((uintptr_t)this + 0x858 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0x81c);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBoundsList() {
    return (void*)((uintptr_t)this + 0x838);
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bDisableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x8a4 + 0)) & 1 != 0;
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceIndexList() {
    return (void*)((uintptr_t)this + 0x848);
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_OcclusionLayerNumNodes() {
    return *(int32_t*)((uintptr_t)this + 0x880);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_CacheMeshExtendedBounds() {
    return (void*)((uintptr_t)this + 0x884);
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bDisableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalInstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HierarchicalInstancedStaticMeshComponent");
    return result;
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::RemoveInstances(void*& InstancesToRemove) {
    return;
}
