#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AugmentedReality {
struct ARTrackedGeometry;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTraceResult {
    float& get_DistanceFromCamera();
    void* get_TraceChannel();
    void* get_LocalToTrackingTransform();
    _Script_AugmentedReality::ARTrackedGeometry*& get_TrackedGeometry();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
