#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct SpriteGeometryCollection {
    void* get_Shapes();
    void* get_GeometryType();
    int32_t& get_PixelsPerSubdivisionX();
    int32_t& get_PixelsPerSubdivisionY();
    bool get_bAvoidVertexMerging();
    void set_bAvoidVertexMerging(bool value);
    float& get_AlphaThreshold();
    float& get_DetailAmount();
    float& get_SimplifyEpsilon();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
