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
struct FontCharacter {
    int32_t& get_StartU();
    int32_t& get_StartV();
    int32_t& get_USize();
    int32_t& get_VSize();
    void* get_TextureIndex();
    int32_t& get_VerticalOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
