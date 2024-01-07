#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeGrassType : public _Script_CoreUObject::Object {
    void* get_GrassVarieties();
    _Script_Engine::StaticMesh*& get_GrassMesh();
    float& get_GrassDensity();
    float& get_PlacementJitter();
    int32_t& get_StartCullDistance();
    int32_t& get_EndCullDistance();
    bool get_RandomRotation();
    void set_RandomRotation(bool value);
    bool get_AlignToSurface();
    void set_AlignToSurface(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
