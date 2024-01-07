#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Game_Blueprints_Squid_Guard_Surv_1_Intro_BP {
#pragma pack(push, 1)
struct Squid_Guard_Surv_1_Intro_BP_C : public _Script_Engine::Character {
    _Script_Engine::StaticMeshComponent*& get_Flashlight();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Leg_2();
    _Script_Engine::StaticMeshComponent*& get_Leg_1();
    _Script_Engine::StaticMeshComponent*& get_Body();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
