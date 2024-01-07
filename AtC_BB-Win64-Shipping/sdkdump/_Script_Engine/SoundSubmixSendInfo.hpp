#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundSubmix;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundSubmixSendInfo {
    float& get_SendLevel();
    _Script_Engine::SoundSubmix*& get_SoundSubmix();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
