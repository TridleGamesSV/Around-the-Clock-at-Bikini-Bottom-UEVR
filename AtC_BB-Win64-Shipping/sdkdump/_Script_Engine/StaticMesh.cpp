#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BodySetup.hpp"
#include "MaterialInterface.hpp"
#include "NavCollision.hpp"
#include "StaticMesh.hpp"
int32_t& _Script_Engine::StaticMesh::get_MinLOD() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
float& _Script_Engine::StaticMesh::get_LpvBiasMultiplier() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::StaticMesh::get_Materials() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::StaticMesh::get_StaticMaterials() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_Engine::StaticMesh::get_bGenerateMeshDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
float& _Script_Engine::StaticMesh::get_DistanceFieldSelfShadowBias() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_Engine::StaticMesh::get_LightmapUVDensity() {
    return *(float*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::StaticMesh::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
int32_t& _Script_Engine::StaticMesh::get_LightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x70);
}
void _Script_Engine::StaticMesh::set_bGenerateMeshDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BodySetup*& _Script_Engine::StaticMesh::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x80);
}
int32_t& _Script_Engine::StaticMesh::get_LODForCollision() {
    return *(int32_t*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::StaticMesh::get_bStripComplexCollisionForConsole() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_Engine::StaticMesh::set_bStripComplexCollisionForConsole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticMesh::get_bHasNavigationData() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 2 != 0;
}
void _Script_Engine::StaticMesh::set_bHasNavigationData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::StaticMesh::get_bSupportUniformlyDistributedSampling() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 4 != 0;
}
void _Script_Engine::StaticMesh::set_bSupportUniformlyDistributedSampling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::StaticMesh::get_bAllowCPUAccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMesh::set_bAllowCPUAccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticMesh::get_Sockets() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::StaticMesh::get_PositiveBoundsExtension() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Engine::StaticMesh::get_NegativeBoundsExtension() {
    return (void*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::StaticMesh::get_ExtendedBounds() {
    return (void*)((uintptr_t)this + 0x100);
}
int32_t& _Script_Engine::StaticMesh::get_ElementToIgnoreForTexFactor() {
    return *(int32_t*)((uintptr_t)this + 0x11c);
}
void* _Script_Engine::StaticMesh::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_Engine::NavCollision*& _Script_Engine::StaticMesh::get_NavCollision() {
    return *(_Script_Engine::NavCollision**)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMesh");
    return result;
}
int32_t _Script_Engine::StaticMesh::GetNumSections(int32_t InLOD) {
    return;
}
int32_t _Script_Engine::StaticMesh::GetNumLODs() {
    return;
}
int32_t _Script_Engine::StaticMesh::GetMaterialIndex(void* MaterialSlotName) {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::StaticMesh::GetMaterial(int32_t MaterialIndex) {
    return;
}
_Script_CoreUObject::BoxSphereBounds _Script_Engine::StaticMesh::GetBounds() {
    return;
}
_Script_CoreUObject::Box _Script_Engine::StaticMesh::GetBoundingBox() {
    return;
}
