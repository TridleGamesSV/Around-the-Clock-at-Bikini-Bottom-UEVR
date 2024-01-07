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
struct PointLightComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Blueprints_Patrick_Follow_Flamethrower_Melt_BP {
#pragma pack(push, 1)
struct Patrick_Follow_Flamethrower_Melt_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Fire_3();
    _Script_Engine::StaticMeshComponent*& get_Fire_2();
    _Script_Engine::StaticMeshComponent*& get_Fire_1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::ParticleSystemComponent*& get_Fire();
    _Script_Engine::AudioComponent*& get_Flame();
    _Script_Engine::AudioComponent*& get_Walk();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Leg10();
    _Script_Engine::StaticMeshComponent*& get_Leg9();
    _Script_Engine::StaticMeshComponent*& get_Leg8();
    _Script_Engine::StaticMeshComponent*& get_Leg7();
    _Script_Engine::StaticMeshComponent*& get_Leg6();
    _Script_Engine::StaticMeshComponent*& get_Leg5();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Patrick();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_9B43DEF64537D9BC35F38A8363FE22BB(void* MovementResult);
    void OnSuccess_9B43DEF64537D9BC35F38A8363FE22BB(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Patrick_Follow_Flamethrower_Melt_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
