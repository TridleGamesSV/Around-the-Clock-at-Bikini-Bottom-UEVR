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
struct PoseDataContainer {
    void* get_PoseNames();
    void* get_Poses();
    void* get_Tracks();
    void* get_TrackMap();
    void* get_Curves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
