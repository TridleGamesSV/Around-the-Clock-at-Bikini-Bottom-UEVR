#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SessionMessages {
#pragma pack(push, 1)
struct SessionServicePong {
    bool get_Authorized();
    void set_Authorized(bool value);
    void* get_BuildDate();
    void* get_DeviceName();
    void* get_InstanceId();
    void* get_InstanceName();
    bool get_IsConsoleBuild();
    void set_IsConsoleBuild(bool value);
    void* get_PlatformName();
    void* get_SessionId();
    void* get_SessionName();
    void* get_SessionOwner();
    bool get_Standalone();
    void set_Standalone(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
