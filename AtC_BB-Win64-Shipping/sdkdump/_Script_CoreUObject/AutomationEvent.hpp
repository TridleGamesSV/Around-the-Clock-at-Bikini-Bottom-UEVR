#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct AutomationEvent {
    void* get_Type();
    void* get_Message();
    void* get_Context();
    void* get_Filename();
    int32_t& get_LineNumber();
    void* get_Timestamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
