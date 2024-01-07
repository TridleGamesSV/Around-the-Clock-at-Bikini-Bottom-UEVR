#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CrowdManagerBase.hpp"
namespace _Script_Engine {
struct NavigationData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdManager : public _Script_Engine::CrowdManagerBase {
    _Script_Engine::NavigationData*& get_MyNavData();
    void* get_AvoidanceConfig();
    void* get_SamplingPatterns();
    int32_t& get_MaxAgents();
    float& get_MaxAgentRadius();
    int32_t& get_MaxAvoidedAgents();
    int32_t& get_MaxAvoidedWalls();
    float& get_NavmeshCheckInterval();
    float& get_PathOptimizationInterval();
    float& get_SeparationDirClamp();
    float& get_PathOffsetRadiusMultiplier();
    bool get_bResolveCollisions();
    void set_bResolveCollisions(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
