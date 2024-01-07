#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeAttenuation : public SoundNode {
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    void* get_AttenuationOverrides();
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
