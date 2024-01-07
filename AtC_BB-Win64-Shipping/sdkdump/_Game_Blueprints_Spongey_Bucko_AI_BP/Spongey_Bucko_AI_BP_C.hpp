#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Blueprints_Spongey_Bucko_AI_BP {
#pragma pack(push, 1)
struct Spongey_Bucko_AI_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Running();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::StaticMeshComponent*& get_Spongey_Bucko_2();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Spongey_Bucko_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_A3A42BD44F18197DD23883983D3D806A(void* MovementResult);
    void OnSuccess_A3A42BD44F18197DD23883983D3D806A(void* MovementResult);
    void OnFail_F5A4E4854E1F8FDA5AF193986DFCF069(void* MovementResult);
    void OnSuccess_F5A4E4854E1F8FDA5AF193986DFCF069(void* MovementResult);
    void OnFail_6B789F1248452667C567A0A45E685CCB(void* MovementResult);
    void OnSuccess_6B789F1248452667C567A0A45E685CCB(void* MovementResult);
    void OnFail_7ED6066A41DBBFF4675A1CA54799D92B(void* MovementResult);
    void OnSuccess_7ED6066A41DBBFF4675A1CA54799D92B(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Spongey_Bucko_AI_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
