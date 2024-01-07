#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvNamedValue {
    void* get_ParamName();
    void* get_ParamType();
    float& get_Value();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
