#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavigationData : public Actor {
    _Script_Engine::PrimitiveComponent*& get_RenderingComp();
    void* get_NavDataConfig();
    bool get_bEnableDrawing();
    void set_bEnableDrawing(bool value);
    bool get_bForceRebuildOnLoad();
    void set_bForceRebuildOnLoad(bool value);
    bool get_bCanBeMainNavData();
    void set_bCanBeMainNavData(bool value);
    bool get_bCanSpawnOnRebuild();
    void set_bCanSpawnOnRebuild(bool value);
    bool get_bRebuildAtRuntime();
    void set_bRebuildAtRuntime(bool value);
    void* get_RuntimeGeneration();
    float& get_ObservedPathsTickInterval();
    void* get_DataVersion();
    void* get_SupportedAreas();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
