#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct ExponentialHeightFogComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Sandy_Fog_Indoor_BP {
#pragma pack(push, 1)
struct Sandy_Fog_Indoor_BP_C : public _Script_Engine::Actor {
    _Script_Engine::BillboardComponent*& get_Billboard();
    _Script_Engine::ExponentialHeightFogComponent*& get_ExponentialHeightFog();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x28
#pragma pack(pop)
}
