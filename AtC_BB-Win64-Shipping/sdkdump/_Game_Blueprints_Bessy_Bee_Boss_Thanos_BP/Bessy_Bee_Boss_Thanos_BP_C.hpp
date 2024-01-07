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
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Game_Blueprints_Bessy_Bee_Boss_Thanos_BP {
#pragma pack(push, 1)
struct Bessy_Bee_Boss_Thanos_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Bucking_Hitbox();
    _Script_Engine::AudioComponent*& get_Bucking_3();
    _Script_Engine::AudioComponent*& get_Bucking_2();
    _Script_Engine::AudioComponent*& get_Bucking_1();
    _Script_Engine::BoxComponent*& get_Attack_Box();
    _Script_Engine::AudioComponent*& get_Spray_Audio();
    _Script_Engine::StaticMeshComponent*& get_Circle();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    _Script_Engine::Actor*& get_Actor_To_Move();
    float& get_Speed();
    void* get_Gun_Offset();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_400FAA5E405FA175E171E3A4812EE03B(void* MovementResult);
    void OnSuccess_400FAA5E405FA175E171E3A4812EE03B(void* MovementResult);
    void OnFail_D4E3DC854E72A2293A8AD291B98F251C(void* MovementResult);
    void OnSuccess_D4E3DC854E72A2293A8AD291B98F251C(void* MovementResult);
    void OnFail_D5A98259483673B74CA9D7A6BDB69CF2(void* MovementResult);
    void OnSuccess_D5A98259483673B74CA9D7A6BDB69CF2(void* MovementResult);
    void OnFail_E8E0AA014288C72663BE0CAB8B95F7D3(void* MovementResult);
    void OnSuccess_E8E0AA014288C72663BE0CAB8B95F7D3(void* MovementResult);
    void OnFail_1F709C1B4BBC14EFFF3B6D920451ADA6(void* MovementResult);
    void OnSuccess_1F709C1B4BBC14EFFF3B6D920451ADA6(void* MovementResult);
    void OnFail_68715AEB4C61AB92B396DB8EF580962F(void* MovementResult);
    void OnSuccess_68715AEB4C61AB92B396DB8EF580962F(void* MovementResult);
    void OnFail_8747CD5C41BCAA3645FBA28806BDED81(void* MovementResult);
    void OnSuccess_8747CD5C41BCAA3645FBA28806BDED81(void* MovementResult);
    void OnFail_469BD77C440522F5ABB5C58A49E8F856(void* MovementResult);
    void OnSuccess_469BD77C440522F5ABB5C58A49E8F856(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Bessy_Bee_Boss_Thanos_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
