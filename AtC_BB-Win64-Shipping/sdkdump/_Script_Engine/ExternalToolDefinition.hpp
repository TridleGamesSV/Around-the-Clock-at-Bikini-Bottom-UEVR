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
struct ExternalToolDefinition {
    void* get_ToolName();
    void* get_ExecutablePath();
    void* get_CommandLineOptions();
    void* get_WorkingDirectory();
    void* get_ScriptExtension();
    void* get_ScriptDirectory();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
