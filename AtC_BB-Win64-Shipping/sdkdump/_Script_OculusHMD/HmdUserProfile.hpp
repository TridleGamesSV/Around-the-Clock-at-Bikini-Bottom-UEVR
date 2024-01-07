#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OculusHMD {
#pragma pack(push, 1)
struct HmdUserProfile {
    void* get_Name();
    void* get_Gender();
    float& get_PlayerHeight();
    float& get_EyeHeight();
    float& get_IPD();
    void* get_NeckToEyeDistance();
    void* get_ExtraFields();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
