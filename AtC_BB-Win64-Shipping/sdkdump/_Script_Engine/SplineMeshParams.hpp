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
struct SplineMeshParams {
    void* get_StartPos();
    void* get_StartTangent();
    void* get_StartScale();
    float& get_StartRoll();
    void* get_StartOffset();
    void* get_EndPos();
    void* get_EndTangent();
    void* get_EndScale();
    float& get_EndRoll();
    void* get_EndOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
