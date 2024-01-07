#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Landscape {
struct LandscapeLayerInfoObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct WeightmapLayerAllocationInfo {
    _Script_Landscape::LandscapeLayerInfoObject*& get_LayerInfo();
    void* get_WeightmapTextureIndex();
    void* get_WeightmapTextureChannel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
