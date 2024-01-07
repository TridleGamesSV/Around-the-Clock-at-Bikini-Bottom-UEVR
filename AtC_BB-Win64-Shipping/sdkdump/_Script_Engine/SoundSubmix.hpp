#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct AmbisonicsSubmixSettingsBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSubmix : public _Script_CoreUObject::Object {
    void* get_ChildSubmixes();
    _Script_Engine::SoundSubmix*& get_ParentSubmix();
    void* get_ChannelFormat();
    void* get_SubmixEffectChain();
    _Script_Engine::AmbisonicsSubmixSettingsBase*& get_AmbisonicsPluginSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
