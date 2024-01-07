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
struct PointLightComponent;
}
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
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Jellien_Horned_KK_Battle_4_BP {
#pragma pack(push, 1)
struct Jellien_Horned_KK_Battle_4_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Attack_4();
    _Script_Engine::StaticMeshComponent*& get_Attack_3();
    _Script_Engine::StaticMeshComponent*& get_Attack_2();
    _Script_Engine::StaticMeshComponent*& get_Attack_1();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::StaticMeshComponent*& get_Animation_5();
    _Script_Engine::StaticMeshComponent*& get_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    float& get_Timeline_1_Walk_DDDB34FC4C87026399CB13BBA75B5C85();
    void* get_Timeline_1__Direction_DDDB34FC4C87026399CB13BBA75B5C85();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void OnFail_068761F04863EE74EF45D2A86A885FF0(void* MovementResult);
    void OnSuccess_068761F04863EE74EF45D2A86A885FF0(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Jellien_Horned_KK_Battle_4_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
