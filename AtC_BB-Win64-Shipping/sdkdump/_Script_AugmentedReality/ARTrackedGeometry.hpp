#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARTrackedGeometry : public _Script_CoreUObject::Object {
    void* get_LocalToTrackingTransform();
    void* get_LocalToAlignedTrackingTransform();
    void* get_TrackingState();
    static _Script_CoreUObject::Class* static_class();
    void* GetTrackingState();
    _Script_CoreUObject::Transform GetLocalToWorldTransform();
    _Script_CoreUObject::Transform GetLocalToTrackingTransform();
    float GetLastUpdateTimestamp();
    int32_t GetLastUpdateFrameNumber();
    void* GetDebugName();
}; // Size: 0x28
#pragma pack(pop)
}
