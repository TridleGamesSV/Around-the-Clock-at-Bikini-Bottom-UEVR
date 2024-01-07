#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PendingNetGame;
}
namespace _Script_Engine {
struct GameViewportClient;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WorldContext {
    void* get_LastURL();
    void* get_LastRemoteURL();
    _Script_Engine::PendingNetGame*& get_PendingNetGame();
    void* get_PackagesToFullyLoad();
    void* get_LoadedLevelsForPendingMapChange();
    void* get_ObjectReferencers();
    void* get_PendingLevelStreamingStatusUpdates();
    _Script_Engine::GameViewportClient*& get_GameViewport();
    _Script_Engine::GameInstance*& get_OwningGameInstance();
    void* get_ActiveNetDrivers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x0
#pragma pack(pop)
}
