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
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct SlateFontInfo {
    _Script_CoreUObject::Object*& get_FontObject();
    _Script_CoreUObject::Object*& get_FontMaterial();
    void* get_OutlineSettings();
    void* get_TypefaceFontName();
    int32_t& get_Size();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
