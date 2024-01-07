#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_Engine {
struct DemoNetDriver;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Level;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelCollection {
    _Script_Engine::GameStateBase*& get_GameState();
    _Script_Engine::NetDriver*& get_NetDriver();
    _Script_Engine::DemoNetDriver*& get_DemoNetDriver();
    _Script_Engine::Level*& get_PersistentLevel();
    void* get_Levels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
