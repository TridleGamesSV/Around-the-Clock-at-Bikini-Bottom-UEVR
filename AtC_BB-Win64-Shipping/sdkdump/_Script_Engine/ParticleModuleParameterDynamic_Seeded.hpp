#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleParameterDynamic.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleParameterDynamic_Seeded : public ParticleModuleParameterDynamic {
    void* get_RandomSeedInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
