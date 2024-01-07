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
struct SoundGroup {
    void* get_SoundGroup();
    void* get_DisplayName();
    bool get_bAlwaysDecompressOnLoad();
    void set_bAlwaysDecompressOnLoad(bool value);
    float& get_DecompressedDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
