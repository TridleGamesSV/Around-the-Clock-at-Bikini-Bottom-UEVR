#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DemoNetDriver : public NetDriver {
    void* get_RollbackNetStartupActors();
    float& get_CheckpointSaveMaxMSPerFrame();
    bool get_bIsLocalReplay();
    void set_bIsLocalReplay(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
