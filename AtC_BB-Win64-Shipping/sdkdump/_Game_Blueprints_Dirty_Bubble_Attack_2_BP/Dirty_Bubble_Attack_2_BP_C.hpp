#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Dirty_Bubble_Attack_2_BP {
#pragma pack(push, 1)
struct Dirty_Bubble_Attack_2_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Blow_Dirty_Bubbles();
    _Script_Engine::StaticMeshComponent*& get_Circle();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    void* get_Gun_Offset();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Dirty_Bubble_Attack_2_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
