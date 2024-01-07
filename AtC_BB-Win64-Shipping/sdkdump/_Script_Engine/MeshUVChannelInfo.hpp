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
struct MeshUVChannelInfo {
    bool get_bInitialized();
    void set_bInitialized(bool value);
    bool get_bOverrideDensities();
    void set_bOverrideDensities(bool value);
    float& get_LocalUVDensities();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
