#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MeshProxySettings {
    int32_t& get_ScreenSize();
    bool get_bOverrideVoxelSize();
    void set_bOverrideVoxelSize(bool value);
    float& get_VoxelSize();
    void* get_MaterialSettings();
    int32_t& get_TextureWidth();
    int32_t& get_TextureHeight();
    bool get_bExportNormalMap();
    void set_bExportNormalMap(bool value);
    bool get_bExportMetallicMap();
    void set_bExportMetallicMap(bool value);
    bool get_bExportRoughnessMap();
    void set_bExportRoughnessMap(bool value);
    bool get_bExportSpecularMap();
    void set_bExportSpecularMap(bool value);
    bool get_bCalculateCorrectLODModel();
    void set_bCalculateCorrectLODModel(bool value);
    float& get_MergeDistance();
    float& get_HardAngleThreshold();
    int32_t& get_LightMapResolution();
    bool get_bComputeLightMapResolution();
    void set_bComputeLightMapResolution(bool value);
    bool get_bRecalculateNormals();
    void set_bRecalculateNormals(bool value);
    bool get_bBakeVertexData();
    void set_bBakeVertexData(bool value);
    bool get_bUseLandscapeCulling();
    void set_bUseLandscapeCulling(bool value);
    void* get_LandscapeCullingPrecision();
    bool get_bAllowAdjacency();
    void set_bAllowAdjacency(bool value);
    bool get_bAllowDistanceField();
    void set_bAllowDistanceField(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
