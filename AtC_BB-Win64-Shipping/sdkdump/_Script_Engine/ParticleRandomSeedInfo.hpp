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
struct ParticleRandomSeedInfo {
    void* get_ParameterName();
    bool get_bGetSeedFromInstance();
    void set_bGetSeedFromInstance(bool value);
    bool get_bInstanceSeedIsIndex();
    void set_bInstanceSeedIsIndex(bool value);
    bool get_bResetSeedOnEmitterLooping();
    void set_bResetSeedOnEmitterLooping(bool value);
    bool get_bRandomlySelectSeedArray();
    void set_bRandomlySelectSeedArray(bool value);
    void* get_RandomSeeds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
