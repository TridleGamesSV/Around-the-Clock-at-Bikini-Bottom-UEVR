#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModule.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSpawnBase : public ParticleModule {
    bool get_bProcessSpawnRate();
    void set_bProcessSpawnRate(bool value);
    bool get_bProcessBurstList();
    void set_bProcessBurstList(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
