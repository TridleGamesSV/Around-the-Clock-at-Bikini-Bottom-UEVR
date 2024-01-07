#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct GrassVariety {
    _Script_Engine::StaticMesh*& get_GrassMesh();
    float& get_GrassDensity();
    bool get_bUseGrid();
    void set_bUseGrid(bool value);
    float& get_PlacementJitter();
    int32_t& get_StartCullDistance();
    int32_t& get_EndCullDistance();
    int32_t& get_MinLOD();
    void* get_Scaling();
    void* get_ScaleX();
    void* get_ScaleY();
    void* get_ScaleZ();
    bool get_RandomRotation();
    void set_RandomRotation(bool value);
    bool get_AlignToSurface();
    void set_AlignToSurface(bool value);
    bool get_bUseLandscapeLightmap();
    void set_bUseLandscapeLightmap(bool value);
    void* get_LightingChannels();
    bool get_bReceivesDecals();
    void set_bReceivesDecals(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
