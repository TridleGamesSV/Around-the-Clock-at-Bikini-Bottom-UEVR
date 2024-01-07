#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct SphereComponent;
}
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
namespace _Game_Blueprints_Jellien_Squirter_KK_3_BP {
#pragma pack(push, 1)
struct Jellien_Squirter_KK_3_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::StaticMeshComponent*& get_Body_5();
    _Script_Engine::StaticMeshComponent*& get_Body_4();
    _Script_Engine::StaticMeshComponent*& get_Body_3();
    _Script_Engine::StaticMeshComponent*& get_Body_2();
    _Script_Engine::AudioComponent*& get_Slam();
    _Script_Engine::AudioComponent*& get_Pissed();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Body();
    float& get_Timeline_1_Walk_1377791B45BAF56C48E1299ECDE618C2();
    void* get_Timeline_1__Direction_1377791B45BAF56C48E1299ECDE618C2();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    void* get_Gun_Offset();
    int32_t& get_EnemyHealth();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellien_Squirter_KK_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
