#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
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
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_Jellyfish_Linger_Menace_Minigame_BP {
#pragma pack(push, 1)
struct Jellyfish_Linger_Menace_Minigame_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Animation_5();
    _Script_Engine::StaticMeshComponent*& get_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    float& get_Timeline_1_Walk_91752EC946E5347DB289ADAE7CB22048();
    void* get_Timeline_1__Direction_91752EC946E5347DB289ADAE7CB22048();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_A4F451334AD35F9F73336081D5C81885(void* MovementResult);
    void OnSuccess_A4F451334AD35F9F73336081D5C81885(void* MovementResult);
    void OnFail_F467E2C64B8D7C791503EB835135D5FC(void* MovementResult);
    void OnSuccess_F467E2C64B8D7C791503EB835135D5FC(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_1_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ExecuteUbergraph_Jellyfish_Linger_Menace_Minigame_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
