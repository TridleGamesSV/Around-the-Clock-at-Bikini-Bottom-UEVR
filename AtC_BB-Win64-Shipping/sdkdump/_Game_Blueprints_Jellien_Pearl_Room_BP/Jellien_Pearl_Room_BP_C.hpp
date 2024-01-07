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
struct Pawn;
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
namespace _Game_Blueprints_Jellien_Pearl_Room_BP {
#pragma pack(push, 1)
struct Jellien_Pearl_Room_BP_C : public _Script_Engine::Character {
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
    float& get_Timeline_1_Walk_B390CA734DBAD39BDF63FCA38E063B7F();
    void* get_Timeline_1__Direction_B390CA734DBAD39BDF63FCA38E063B7F();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_15BF333144F40EAAD26CECA15E0CE7C9(void* MovementResult);
    void OnSuccess_15BF333144F40EAAD26CECA15E0CE7C9(void* MovementResult);
    void OnFail_B299CE744C93C689840FB598C73EEAD3(void* MovementResult);
    void OnSuccess_B299CE744C93C689840FB598C73EEAD3(void* MovementResult);
    void OnFail_B4FDF34041877D7587C440AF8830AC73(void* MovementResult);
    void OnSuccess_B4FDF34041877D7587C440AF8830AC73(void* MovementResult);
    void OnFail_33C61E8F4E925D583005FE8653FF340E(void* MovementResult);
    void OnSuccess_33C61E8F4E925D583005FE8653FF340E(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellien_Pearl_Room_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
