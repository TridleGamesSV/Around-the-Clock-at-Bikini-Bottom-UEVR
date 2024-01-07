#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LatentActionInfo {
    int32_t& get_Linkage();
    int32_t& get_UUID();
    void* get_ExecutionFunction();
    _Script_CoreUObject::Object*& get_CallbackTarget();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
