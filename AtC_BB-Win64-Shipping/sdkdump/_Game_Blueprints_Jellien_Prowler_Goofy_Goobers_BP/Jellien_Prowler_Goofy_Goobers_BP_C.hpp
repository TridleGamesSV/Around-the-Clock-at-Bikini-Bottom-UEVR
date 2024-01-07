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
struct CameraComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
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
namespace _Game_Blueprints_Jellien_Prowler_Goofy_Goobers_BP {
#pragma pack(push, 1)
struct Jellien_Prowler_Goofy_Goobers_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Swim_10();
    _Script_Engine::StaticMeshComponent*& get_Swim_9();
    _Script_Engine::StaticMeshComponent*& get_Swim_8();
    _Script_Engine::StaticMeshComponent*& get_Swim_7();
    _Script_Engine::StaticMeshComponent*& get_Swim_6();
    _Script_Engine::StaticMeshComponent*& get_Swim_5();
    _Script_Engine::StaticMeshComponent*& get_Swim_4();
    _Script_Engine::StaticMeshComponent*& get_Swim_3();
    _Script_Engine::StaticMeshComponent*& get_Swim_2();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::StaticMeshComponent*& get_Body_Opaque();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Swim_1();
    float& get_Timeline_1_Walk_B14D1D6543627A934AA0ACBEEE4E2B8A();
    void* get_Timeline_1__Direction_B14D1D6543627A934AA0ACBEEE4E2B8A();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_499860F744604EA6CE70B98E4042FB0A(void* MovementResult);
    void OnSuccess_499860F744604EA6CE70B98E4042FB0A(void* MovementResult);
    void OnFail_674C1905409DE99B848D1AB6EFD2F37C(void* MovementResult);
    void OnSuccess_674C1905409DE99B848D1AB6EFD2F37C(void* MovementResult);
    void OnFail_79DF3BD4437913DB5972D3B9B59C89CC(void* MovementResult);
    void OnSuccess_79DF3BD4437913DB5972D3B9B59C89CC(void* MovementResult);
    void OnFail_11BE8A7A411B8B8A3F43BC9518036A98(void* MovementResult);
    void OnSuccess_11BE8A7A411B8B8A3F43BC9518036A98(void* MovementResult);
    void OnFail_4B4358B54F87BF8F1872ED8C4A98BD12(void* MovementResult);
    void OnSuccess_4B4358B54F87BF8F1872ED8C4A98BD12(void* MovementResult);
    void OnFail_1745CAE54B943E96C300B8B7A3163A55(void* MovementResult);
    void OnSuccess_1745CAE54B943E96C300B8B7A3163A55(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellien_Prowler_Goofy_Goobers_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
