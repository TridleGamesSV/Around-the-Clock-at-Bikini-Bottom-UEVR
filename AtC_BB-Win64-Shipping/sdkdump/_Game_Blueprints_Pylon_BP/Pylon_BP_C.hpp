#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Pylon_BP {
#pragma pack(push, 1)
struct Pylon_BP_C : public _Script_Engine::StaticMeshActor {
    _Script_Engine::AudioComponent*& get_Zappy();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
