#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
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
namespace _Game_Blueprints_Sandy_Sleeping_BP {
#pragma pack(push, 1)
struct Sandy_Sleeping_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Zs();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::AudioComponent*& get_Sleep();
    _Script_Engine::StaticMeshComponent*& get_Sandy_Wake_2();
    _Script_Engine::StaticMeshComponent*& get_Sandy_Wake_1();
    _Script_Engine::StaticMeshComponent*& get_Sandy_Sleep();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Sandy_Sleeping_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
