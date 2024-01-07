#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CustomMeshComponent {
#pragma pack(push, 1)
struct CustomMeshComponent : public _Script_Engine::MeshComponent {
    static _Script_CoreUObject::Class* static_class();
    bool SetCustomMeshTriangles(void*& Triangles);
    void ClearCustomMeshTriangles();
    void AddCustomMeshTriangles(void*& Triangles);
}; // Size: 0x28
#pragma pack(pop)
}
