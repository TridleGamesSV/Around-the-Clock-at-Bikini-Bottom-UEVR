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
struct URL {
    void* get_Protocol();
    void* get_Host();
    int32_t& get_Port();
    void* get_Map();
    void* get_RedirectURL();
    void* get_Op();
    void* get_Portal();
    int32_t& get_Valid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
