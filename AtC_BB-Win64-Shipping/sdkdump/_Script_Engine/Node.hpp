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
struct Node {
    void* get_Name();
    void* get_ParentName();
    void* get_Transform();
    void* get_DisplayName();
    bool get_bAdvanced();
    void set_bAdvanced(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
