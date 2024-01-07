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
namespace _Game_Blueprints_Bessy_Bee_Boss_3_BP {
#pragma pack(push, 1)
struct Bessy_Bee_Boss_3_BP_C : public _Script_Engine::Character {
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
    void OnFail_A2D8880D4C93856D7FBC25ACC97407F5(void* MovementResult);
    void OnSuccess_A2D8880D4C93856D7FBC25ACC97407F5(void* MovementResult);
    void OnFail_301F317B401A2417D769A7AF9733C89E(void* MovementResult);
    void OnSuccess_301F317B401A2417D769A7AF9733C89E(void* MovementResult);
    void OnFail_D3748A7347BCC27705C5689F7DE119DF(void* MovementResult);
    void OnSuccess_D3748A7347BCC27705C5689F7DE119DF(void* MovementResult);
    void OnFail_E44C379E4403F00A2A9232A842335CB9(void* MovementResult);
    void OnSuccess_E44C379E4403F00A2A9232A842335CB9(void* MovementResult);
    void OnFail_2DD7A7D54840BB13E3E463BAB22FAD71(void* MovementResult);
    void OnSuccess_2DD7A7D54840BB13E3E463BAB22FAD71(void* MovementResult);
    void OnFail_EF519A584FA064A883B6C1B36671C243(void* MovementResult);
    void OnSuccess_EF519A584FA064A883B6C1B36671C243(void* MovementResult);
    void OnFail_3A6A364047231E15BF57CFB06409335A(void* MovementResult);
    void OnSuccess_3A6A364047231E15BF57CFB06409335A(void* MovementResult);
    void OnFail_24325DD54D5A565CBCB07289D9A57B83(void* MovementResult);
    void OnSuccess_24325DD54D5A565CBCB07289D9A57B83(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Bessy_Bee_Boss_3_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
