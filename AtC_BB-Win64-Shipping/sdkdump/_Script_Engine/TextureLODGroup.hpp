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
struct TextureLODGroup {
    void* get_Group();
    int32_t& get_LODBias();
    int32_t& get_NumStreamedMips();
    void* get_MipGenSettings();
    int32_t& get_MinLODSize();
    int32_t& get_MaxLODSize();
    void* get_MinMagFilter();
    void* get_MipFilter();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
