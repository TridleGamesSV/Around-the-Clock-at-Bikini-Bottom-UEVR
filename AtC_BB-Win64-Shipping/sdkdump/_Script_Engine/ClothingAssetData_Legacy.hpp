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
struct ClothingAssetData_Legacy {
    void* get_AssetName();
    void* get_ApexFileName();
    bool get_bClothPropertiesChanged();
    void set_bClothPropertiesChanged(bool value);
    void* get_PhysicsProperties();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
