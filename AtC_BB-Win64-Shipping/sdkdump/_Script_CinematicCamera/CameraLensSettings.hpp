#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraLensSettings {
    float& get_MinFocalLength();
    float& get_MaxFocalLength();
    float& get_MinFStop();
    float& get_MaxFStop();
    float& get_MinimumFocusDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
