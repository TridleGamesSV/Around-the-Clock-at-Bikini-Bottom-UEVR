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
struct MarkerSyncAnimPosition {
    void* get_PreviousMarkerName();
    void* get_NextMarkerName();
    float& get_PositionBetweenMarkers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
