#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AugmentedReality {
#pragma pack(push, 1)
struct ARSessionConfig : public _Script_Engine::DataAsset {
    void* get_SessionType();
    void* get_PlaneDetectionMode();
    void* get_LightEstimationMode();
    void* get_FrameSyncMode();
    bool get_bEnableAutomaticCameraOverlay();
    void set_bEnableAutomaticCameraOverlay(bool value);
    bool get_bEnableAutomaticCameraTracking();
    void set_bEnableAutomaticCameraTracking(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
