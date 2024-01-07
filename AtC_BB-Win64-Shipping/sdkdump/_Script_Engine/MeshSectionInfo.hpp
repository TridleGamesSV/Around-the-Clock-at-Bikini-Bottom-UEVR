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
struct MeshSectionInfo {
    int32_t& get_MaterialIndex();
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    bool get_bCastShadow();
    void set_bCastShadow(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
