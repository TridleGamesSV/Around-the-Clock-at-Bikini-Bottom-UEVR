#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ProceduralMeshComponent {
#pragma pack(push, 1)
struct ProcMeshVertex {
    void* get_Position();
    void* get_Normal();
    void* get_Tangent();
    void* get_Color();
    void* get_UV0();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
