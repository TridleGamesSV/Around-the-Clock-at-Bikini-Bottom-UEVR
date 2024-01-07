#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshProxySettings.hpp"
int32_t& _Script_Engine::MeshProxySettings::get_ScreenSize() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::MeshProxySettings::get_TextureWidth() {
    return *(int32_t*)((uintptr_t)this + 0x98);
}
bool _Script_Engine::MeshProxySettings::get_bOverrideVoxelSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bOverrideVoxelSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_VoxelSize() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::MeshProxySettings::get_TextureHeight() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
void* _Script_Engine::MeshProxySettings::get_MaterialSettings() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::MeshProxySettings::get_bExportNormalMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportNormalMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportMetallicMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportMetallicMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportRoughnessMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa2 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportRoughnessMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bExportSpecularMap() {
    return (*(uint8_t*)((uintptr_t)this + 0xa3 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bExportSpecularMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bCalculateCorrectLODModel() {
    return (*(uint8_t*)((uintptr_t)this + 0xa4 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bCalculateCorrectLODModel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::MeshProxySettings::get_MergeDistance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_Engine::MeshProxySettings::get_HardAngleThreshold() {
    return *(float*)((uintptr_t)this + 0xac);
}
int32_t& _Script_Engine::MeshProxySettings::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
bool _Script_Engine::MeshProxySettings::get_bComputeLightMapResolution() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bComputeLightMapResolution(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bRecalculateNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0xb5 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bRecalculateNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bBakeVertexData() {
    return (*(uint8_t*)((uintptr_t)this + 0xb6 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bBakeVertexData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bUseLandscapeCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xb7 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bUseLandscapeCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb7 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::MeshProxySettings::get_LandscapeCullingPrecision() {
    return (void*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::MeshProxySettings::get_bAllowAdjacency() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowAdjacency(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshProxySettings::get_bAllowDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0xba + 0)) & 1 != 0;
}
void _Script_Engine::MeshProxySettings::set_bAllowDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xba + 0);
    *(uint8_t*)((uintptr_t)this + 0xba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::MeshProxySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshProxySettings");
    return result;
}
