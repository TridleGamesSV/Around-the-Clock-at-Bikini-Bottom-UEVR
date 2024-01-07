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
struct ClusterNode {
    void* get_BoundMin();
    int32_t& get_FirstChild();
    void* get_BoundMax();
    int32_t& get_LastChild();
    int32_t& get_FirstInstance();
    int32_t& get_LastInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
