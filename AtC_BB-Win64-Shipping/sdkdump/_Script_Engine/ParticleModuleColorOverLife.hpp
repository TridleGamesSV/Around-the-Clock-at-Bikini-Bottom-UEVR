#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleColorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleColorOverLife : public ParticleModuleColorBase {
    void* get_ColorOverLife();
    void* get_AlphaOverLife();
    bool get_bClampAlpha();
    void set_bClampAlpha(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
