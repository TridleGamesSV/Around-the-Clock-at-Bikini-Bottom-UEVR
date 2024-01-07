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
struct SoundConcurrencySettings {
    int32_t& get_MaxCount();
    bool get_bLimitToOwner();
    void set_bLimitToOwner(bool value);
    void* get_ResolutionRule();
    float& get_VolumeScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
