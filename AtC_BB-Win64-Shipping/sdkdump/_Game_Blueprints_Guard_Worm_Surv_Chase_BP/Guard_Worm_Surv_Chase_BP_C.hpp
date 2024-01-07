#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct AudioComponent;
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
struct CameraComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Game_Blueprints_MySaveGame {
struct MySaveGame_C;
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
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_Guard_Worm_Surv_Chase_BP {
#pragma pack(push, 1)
struct Guard_Worm_Surv_Chase_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::AudioComponent*& get_Bark_Loop();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    float& get_Timeline_0_Walk_7FB896474C94627CEB61598AC1366280();
    void* get_Timeline_0__Direction_7FB896474C94627CEB61598AC1366280();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    _Game_Blueprints_MySaveGame::MySaveGame_C*& get_NewVar_0();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void ExecuteUbergraph_Guard_Worm_Surv_Chase_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
