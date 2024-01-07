#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleParameterBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleParameterDynamic : public ParticleModuleParameterBase {
    void* get_DynamicParams();
    int32_t& get_UpdateFlags();
    bool get_bUsesVelocity();
    void set_bUsesVelocity(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
