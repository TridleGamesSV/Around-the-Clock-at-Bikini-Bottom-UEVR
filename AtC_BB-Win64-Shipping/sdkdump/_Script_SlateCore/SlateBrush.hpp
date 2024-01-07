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
struct SlateBrush {
    void* get_ImageSize();
    void* get_Margin();
    void* get_TintColor();
    _Script_CoreUObject::Object*& get_ResourceObject();
    void* get_ResourceName();
    void* get_UVRegion();
    void* get_DrawAs();
    void* get_Tiling();
    void* get_Mirroring();
    void* get_ImageType();
    bool get_bIsDynamicallyLoaded();
    void set_bIsDynamicallyLoaded(bool value);
    bool get_bHasUObject();
    void set_bHasUObject(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
