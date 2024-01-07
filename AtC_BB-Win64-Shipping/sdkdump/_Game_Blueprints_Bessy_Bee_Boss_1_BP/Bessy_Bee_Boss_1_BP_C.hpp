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
namespace _Game_Blueprints_Bessy_Bee_Boss_1_BP {
#pragma pack(push, 1)
struct Bessy_Bee_Boss_1_BP_C : public _Script_Engine::Character {
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
    void OnFail_C30AB16743D0430461B538B6DEC4EC75(void* MovementResult);
    void OnSuccess_C30AB16743D0430461B538B6DEC4EC75(void* MovementResult);
    void OnFail_51B44D4E4B0598332E8715843B2DAC85(void* MovementResult);
    void OnSuccess_51B44D4E4B0598332E8715843B2DAC85(void* MovementResult);
    void OnFail_DF82501B42D1EF395D8BA88351D6A5A2(void* MovementResult);
    void OnSuccess_DF82501B42D1EF395D8BA88351D6A5A2(void* MovementResult);
    void OnFail_62BDC8C24F60160A7218B89F76AB2C7E(void* MovementResult);
    void OnSuccess_62BDC8C24F60160A7218B89F76AB2C7E(void* MovementResult);
    void OnFail_07F7196F4836900D2BE495807DDE8B40(void* MovementResult);
    void OnSuccess_07F7196F4836900D2BE495807DDE8B40(void* MovementResult);
    void OnFail_F8D2EBF142F33CE73CA74F8A8FCBD17C(void* MovementResult);
    void OnSuccess_F8D2EBF142F33CE73CA74F8A8FCBD17C(void* MovementResult);
    void OnFail_EEFECABF438A1489A40F5EA31BF0F1C8(void* MovementResult);
    void OnSuccess_EEFECABF438A1489A40F5EA31BF0F1C8(void* MovementResult);
    void OnFail_03B29B88423EE511DBBF0E895AE911B0(void* MovementResult);
    void OnSuccess_03B29B88423EE511DBBF0E895AE911B0(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Bessy_Bee_Boss_1_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
