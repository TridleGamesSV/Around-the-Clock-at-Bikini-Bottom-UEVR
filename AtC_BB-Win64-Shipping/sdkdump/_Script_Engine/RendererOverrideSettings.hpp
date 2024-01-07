#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RendererOverrideSettings : public DeveloperSettings {
    bool get_bSupportAllShaderPermutations();
    void set_bSupportAllShaderPermutations(bool value);
    bool get_bForceRecomputeTangents();
    void set_bForceRecomputeTangents(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
