#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
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
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Boat_Fall_BP {
#pragma pack(push, 1)
struct Boat_Fall_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Boom();
    _Script_Engine::PointLightComponent*& get_Glow_2();
    _Script_Engine::PointLightComponent*& get_Glow_1();
    _Script_Engine::ParticleSystemComponent*& get_Explosion();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem1();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::BoxComponent*& get_Explosion_Box();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    _Script_Engine::StaticMeshComponent*& get_Boat();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Explosion_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Boat_Fall_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
