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
struct LevelViewportInfo {
    void* get_CamPosition();
    void* get_CamRotation();
    float& get_CamOrthoZoom();
    bool get_CamUpdated();
    void set_CamUpdated(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
