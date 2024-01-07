#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_BuildPatchServices {
#pragma pack(push, 1)
struct ChunkInfoData {
    void* get_Guid();
    void* get_Hash();
    void* get_ShaHash();
    void* get_FileSize();
    void* get_GroupNumber();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
