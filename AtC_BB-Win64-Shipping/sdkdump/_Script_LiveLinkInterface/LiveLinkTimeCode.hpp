#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
#pragma pack(push, 1)
struct LiveLinkTimeCode {
    int32_t& get_Seconds();
    int32_t& get_Frames();
    void* get_FrameRate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
