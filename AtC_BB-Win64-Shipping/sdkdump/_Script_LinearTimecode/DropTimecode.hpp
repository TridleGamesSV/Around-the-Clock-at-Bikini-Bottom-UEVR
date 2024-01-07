#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LinearTimecode {
#pragma pack(push, 1)
struct DropTimecode {
    int32_t& get_Hours();
    int32_t& get_Minutes();
    int32_t& get_Seconds();
    int32_t& get_Frame();
    int32_t& get_Drop();
    int32_t& get_FrameRate();
    int32_t& get_Clock();
    int32_t& get_Color();
    int32_t& get_Forward();
    int32_t& get_NewFrame();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
