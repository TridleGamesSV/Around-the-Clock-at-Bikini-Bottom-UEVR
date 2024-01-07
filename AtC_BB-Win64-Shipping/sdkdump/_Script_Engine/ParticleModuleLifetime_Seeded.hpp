#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLifetime.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLifetime_Seeded : public ParticleModuleLifetime {
    void* get_RandomSeedInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
