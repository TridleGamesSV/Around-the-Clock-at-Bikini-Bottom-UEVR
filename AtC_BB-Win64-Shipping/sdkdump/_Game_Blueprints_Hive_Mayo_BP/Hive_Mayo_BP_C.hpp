#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Hive_Mayo_BP {
#pragma pack(push, 1)
struct Hive_Mayo_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Mayo();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::ParticleSystemComponent*& get_Objective_Sparkle();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void InpActEvt_Interact_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Hive_Mayo_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
