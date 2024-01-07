#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
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
namespace _Game_Blueprints_Prowler_Goofy_Suit_900_BP {
#pragma pack(push, 1)
struct Prowler_Goofy_Suit_900_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Prowler_Laugh();
    _Script_Engine::AudioComponent*& get_Scream_5();
    _Script_Engine::AudioComponent*& get_Scream_4();
    _Script_Engine::AudioComponent*& get_Scream_3();
    _Script_Engine::AudioComponent*& get_Scream_2();
    _Script_Engine::AudioComponent*& get_Scream_1();
    _Script_Engine::StaticMeshComponent*& get_Pose_5();
    _Script_Engine::StaticMeshComponent*& get_Pose_4();
    _Script_Engine::StaticMeshComponent*& get_Pose_3();
    _Script_Engine::StaticMeshComponent*& get_Pose_2();
    _Script_Engine::BoxComponent*& get_Laugh();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::StaticMeshComponent*& get_Body_Opaque();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Pose_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void BndEvt__Laugh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Prowler_Goofy_Suit_900_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
