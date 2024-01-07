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
struct StaticTerrainLayerWeightParameter {
    void* get_ParameterInfo();
    bool get_bOverride();
    void set_bOverride(bool value);
    void* get_ExpressionGUID();
    int32_t& get_WeightmapIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
