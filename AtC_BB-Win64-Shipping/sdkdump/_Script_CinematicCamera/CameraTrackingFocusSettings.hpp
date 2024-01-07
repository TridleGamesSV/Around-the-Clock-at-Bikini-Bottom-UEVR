#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraTrackingFocusSettings {
    _Script_Engine::Actor*& get_ActorToTrack();
    void* get_RelativeOffset();
    bool get_bDrawDebugTrackingFocusPoint();
    void set_bDrawDebugTrackingFocusPoint(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
