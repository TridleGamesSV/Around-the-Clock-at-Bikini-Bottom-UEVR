#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Plankton_Change_Explode_BP {
#pragma pack(push, 1)
struct Plankton_Change_Explode_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Explosions();
    _Script_Engine::PointLightComponent*& get_Boom_Light();
    _Script_Engine::ParticleSystemComponent*& get_Blood();
    _Script_Engine::AudioComponent*& get_Scream();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Plankton_Change_Explode_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
