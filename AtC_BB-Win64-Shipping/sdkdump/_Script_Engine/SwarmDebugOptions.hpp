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
struct SwarmDebugOptions {
    bool get_bDistributionEnabled();
    void set_bDistributionEnabled(bool value);
    bool get_bForceContentExport();
    void set_bForceContentExport(bool value);
    bool get_bInitialized();
    void set_bInitialized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
