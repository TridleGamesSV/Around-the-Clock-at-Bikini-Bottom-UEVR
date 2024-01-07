#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Money_Stack_BP {
#pragma pack(push, 1)
struct Money_Stack_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::StaticMeshComponent*& get_Plane();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ExecuteUbergraph_Money_Stack_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
