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
struct AudioComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Pearl_End_Dead_BP {
#pragma pack(push, 1)
struct Pearl_End_Dead_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Goo_Blood_Spew();
    _Script_Engine::AudioComponent*& get_Scream();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::PointLightComponent*& get_Glow_2();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Pearl_End_Dead_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
