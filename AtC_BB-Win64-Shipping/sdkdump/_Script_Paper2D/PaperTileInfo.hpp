#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Paper2D {
struct PaperTileSet;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Paper2D {
#pragma pack(push, 1)
struct PaperTileInfo {
    _Script_Paper2D::PaperTileSet*& get_TileSet();
    int32_t& get_PackedTileIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
