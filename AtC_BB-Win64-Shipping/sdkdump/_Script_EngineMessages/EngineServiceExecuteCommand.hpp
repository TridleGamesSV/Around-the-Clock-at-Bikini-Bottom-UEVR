#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineMessages {
#pragma pack(push, 1)
struct EngineServiceExecuteCommand {
    void* get_Command();
    void* get_UserName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
