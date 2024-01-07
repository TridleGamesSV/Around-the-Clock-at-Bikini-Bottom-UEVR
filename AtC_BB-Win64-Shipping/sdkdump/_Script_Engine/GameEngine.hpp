#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Engine.hpp"
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameEngine : public Engine {
    float& get_MaxDeltaTime();
    float& get_ServerFlushLogInterval();
    _Script_Engine::GameInstance*& get_GameInstance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
