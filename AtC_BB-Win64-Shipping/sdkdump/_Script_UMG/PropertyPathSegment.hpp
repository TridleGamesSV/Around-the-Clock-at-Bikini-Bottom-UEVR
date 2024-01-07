#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Struct;
}
namespace _Script_CoreUObject {
struct Field;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct PropertyPathSegment {
    void* get_Name();
    int32_t& get_ArrayIndex();
    _Script_CoreUObject::Struct*& get_Struct();
    _Script_CoreUObject::Field*& get_Field();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
