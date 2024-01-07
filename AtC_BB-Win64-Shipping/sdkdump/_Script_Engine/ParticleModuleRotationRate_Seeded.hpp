#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleRotationRate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleRotationRate_Seeded : public ParticleModuleRotationRate {
    void* get_RandomSeedInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
