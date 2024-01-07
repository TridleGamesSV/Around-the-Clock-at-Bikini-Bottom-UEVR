#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshMergingSettings.hpp"
bool _Script_Engine::MeshMergingSettings::get_bGenerateLightMapUV() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bGenerateLightMapUV(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bComputedLightMapResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::MeshMergingSettings::get_TargetLightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void _Script_Engine::MeshMergingSettings::set_bComputedLightMapResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bImportVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bImportVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshMergingSettings::set_bExportRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bPivotPointAtZero() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bExportNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshMergingSettings::set_bPivotPointAtZero(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bMergePhysicsData() {
    return (*(uint8_t*)((uintptr_t)this + 0xb + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bMergePhysicsData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb + 0);
    *(uint8_t*)((uintptr_t)this + 0xb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseLandscapeCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
bool _Script_Engine::MeshMergingSettings::get_bMergeMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bMergeMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bBakeVertexDataToMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void* _Script_Engine::MeshMergingSettings::get_MaterialSettings() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_Engine::MeshMergingSettings::set_bBakeVertexDataToMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshMergingSettings::set_bCalculateCorrectLODModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9f + 0);
    *(uint8_t*)((uintptr_t)this + 0x9f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseVertexDataForBakingMaterial() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bUseVertexDataForBakingMaterial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::MeshMergingSettings::set_bExportMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xae + 0);
    *(uint8_t*)((uintptr_t)this + 0xae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bUseTextureBinning() {
    return (*(uint8_t*)((uintptr_t)this + 0x9e + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bUseTextureBinning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9e + 0);
    *(uint8_t*)((uintptr_t)this + 0x9e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bCalculateCorrectLODModel() {
    return (*(uint8_t*)((uintptr_t)this + 0x9f + 0)) & 1 != 0;
}
void* _Script_Engine::MeshMergingSettings::get_LODSelectionType() {
    return (void*)((uintptr_t)this + 0xa0);
}
int32_t& _Script_Engine::MeshMergingSettings::get_ExportSpecificLOD() {
    return *(int32_t*)((uintptr_t)this + 0xa4);
}
int32_t& _Script_Engine::MeshMergingSettings::get_SpecificLOD() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
void _Script_Engine::MeshMergingSettings::set_bUseLandscapeCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshMergingSettings::get_bExportNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 1 != 0;
}
bool _Script_Engine::MeshMergingSettings::get_bExportMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xae + 0)) & 1 != 0;
}
bool _Script_Engine::MeshMergingSettings::get_bExportRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf + 0)) & 1 != 0;
}
bool _Script_Engine::MeshMergingSettings::get_bExportSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshMergingSettings::set_bExportSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::MeshMergingSettings::get_MergedMaterialAtlasResolution() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_Engine::MeshMergingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshMergingSettings");
    return result;
}
