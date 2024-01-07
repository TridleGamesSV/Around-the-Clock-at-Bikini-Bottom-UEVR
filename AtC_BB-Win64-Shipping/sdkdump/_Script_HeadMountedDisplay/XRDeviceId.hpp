#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct XRDeviceId {
    void* get_SystemName();
    int32_t& get_DeviceID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
