#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMaterial {
    _Script_Engine::MaterialInterface*& get_MaterialInterface();
    bool get_bEnableShadowCasting();
    void set_bEnableShadowCasting(bool value);
    bool get_bRecomputeTangent();
    void set_bRecomputeTangent(bool value);
    void* get_MaterialSlotName();
    void* get_UVChannelData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
