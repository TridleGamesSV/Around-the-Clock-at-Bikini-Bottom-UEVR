#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Landscape {
struct LandscapeMeshProxyComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeMeshProxyActor : public _Script_Engine::Actor {
    _Script_Landscape::LandscapeMeshProxyComponent*& get_LandscapeMeshProxyComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
