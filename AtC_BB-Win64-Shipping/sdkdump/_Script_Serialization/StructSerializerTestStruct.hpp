#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Serialization {
#pragma pack(push, 1)
struct StructSerializerTestStruct {
    void* get_Numerics();
    void* get_Booleans();
    void* get_Objects();
    void* get_Builtins();
    void* get_Arrays();
    void* get_Maps();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
