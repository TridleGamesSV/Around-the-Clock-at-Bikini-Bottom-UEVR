#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSubUVBase.hpp"
namespace _Script_Engine {
struct SubUVAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSubUV : public ParticleModuleSubUVBase {
    _Script_Engine::SubUVAnimation*& get_Animation();
    void* get_SubImageIndex();
    bool get_bUseRealTime();
    void set_bUseRealTime(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
