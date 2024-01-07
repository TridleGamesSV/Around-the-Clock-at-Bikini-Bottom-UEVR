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
namespace _Game_Blueprints_Bessy_Bee_Boss_2_BP {
#pragma pack(push, 1)
struct Bessy_Bee_Boss_2_BP_C : public _Script_Engine::Character {
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
    void OnFail_333593644ADB356387AB33BA3ACA1724(void* MovementResult);
    void OnSuccess_333593644ADB356387AB33BA3ACA1724(void* MovementResult);
    void OnFail_100A2F554587E6D789B1CAAB12675E8D(void* MovementResult);
    void OnSuccess_100A2F554587E6D789B1CAAB12675E8D(void* MovementResult);
    void OnFail_77A4F07942E39F593E612584D3F43576(void* MovementResult);
    void OnSuccess_77A4F07942E39F593E612584D3F43576(void* MovementResult);
    void OnFail_6E03B90C4EA3E07FCBBEB28F1A312145(void* MovementResult);
    void OnSuccess_6E03B90C4EA3E07FCBBEB28F1A312145(void* MovementResult);
    void OnFail_DAA8062A45CD932B4B18C0ADD40AC29C(void* MovementResult);
    void OnSuccess_DAA8062A45CD932B4B18C0ADD40AC29C(void* MovementResult);
    void OnFail_3FD63F1E43AA4C039CB53BB60FCB25C4(void* MovementResult);
    void OnSuccess_3FD63F1E43AA4C039CB53BB60FCB25C4(void* MovementResult);
    void OnFail_323404744A305E6B18E24FB570C0984B(void* MovementResult);
    void OnSuccess_323404744A305E6B18E24FB570C0984B(void* MovementResult);
    void OnFail_77BF6B544F74E02447C580A98C38491C(void* MovementResult);
    void OnSuccess_77BF6B544F74E02447C580A98C38491C(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Attack_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Bucking_Hitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Bessy_Bee_Boss_2_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
