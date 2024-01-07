#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Plankton_Fight_Beam_Red_BP {
#pragma pack(push, 1)
struct Plankton_Fight_Beam_Red_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::PointLightComponent*& get_Laser_Light_2();
    _Script_Engine::PointLightComponent*& get_LaserLight();
    _Script_Engine::ParticleSystemComponent*& get_Laser();
    _Script_Engine::BoxComponent*& get_BeamBox();
    _Script_Engine::AudioComponent*& get_Beam();
    _Script_Engine::BoxComponent*& get_Body_Box();
    int32_t& get_EnemyHealth();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Body_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__BeamBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Plankton_Fight_Beam_Red_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
