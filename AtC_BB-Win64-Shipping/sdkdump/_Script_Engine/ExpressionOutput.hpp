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
struct ExpressionOutput {
    void* get_OutputName();
    int32_t& get_Mask();
    int32_t& get_MaskR();
    int32_t& get_MaskG();
    int32_t& get_MaskB();
    int32_t& get_MaskA();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
