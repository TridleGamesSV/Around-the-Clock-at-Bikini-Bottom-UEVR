#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct DelegateRuntimeBinding {
    void* get_ObjectName();
    void* get_PropertyName();
    void* get_FunctionName();
    void* get_SourcePath();
    void* get_Kind();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
