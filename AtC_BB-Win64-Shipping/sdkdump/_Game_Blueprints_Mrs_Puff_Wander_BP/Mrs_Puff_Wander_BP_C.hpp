#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
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
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_CoreUObject {
struct Class;
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
namespace _Game_Blueprints_Mrs_Puff_Wander_BP {
#pragma pack(push, 1)
struct Mrs_Puff_Wander_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Blood_3();
    _Script_Engine::ParticleSystemComponent*& get_Blood_2();
    _Script_Engine::AudioComponent*& get_Idle_14();
    _Script_Engine::AudioComponent*& get_Idle_13();
    _Script_Engine::AudioComponent*& get_Idle_12();
    _Script_Engine::AudioComponent*& get_Idle_11();
    _Script_Engine::AudioComponent*& get_Idle_10();
    _Script_Engine::AudioComponent*& get_Idle_9();
    _Script_Engine::AudioComponent*& get_Idle_8();
    _Script_Engine::AudioComponent*& get_Idle_7();
    _Script_Engine::AudioComponent*& get_Idle_6();
    _Script_Engine::AudioComponent*& get_Idle_5();
    _Script_Engine::AudioComponent*& get_Idle_4();
    _Script_Engine::AudioComponent*& get_Idle_3();
    _Script_Engine::AudioComponent*& get_Idle_2();
    _Script_Engine::AudioComponent*& get_Idle_1();
    _Script_Engine::ParticleSystemComponent*& get_Blood_1();
    _Script_Engine::AudioComponent*& get_Chase_Music();
    _Script_Engine::PointLightComponent*& get_AttackLight();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_C9C6B8534067AC82BBC75D8F89526611(void* MovementResult);
    void OnSuccess_C9C6B8534067AC82BBC75D8F89526611(void* MovementResult);
    void OnFail_50CE92EC429434CBE08D6B962F87BE63(void* MovementResult);
    void OnSuccess_50CE92EC429434CBE08D6B962F87BE63(void* MovementResult);
    void OnFail_8149E80A447213938029778355FA6903(void* MovementResult);
    void OnSuccess_8149E80A447213938029778355FA6903(void* MovementResult);
    void OnFail_D39452DE41542ED70CEBBB8A082D8D82(void* MovementResult);
    void OnSuccess_D39452DE41542ED70CEBBB8A082D8D82(void* MovementResult);
    void OnFail_7AC0B7774703D848FDEF7AA74633C70F(void* MovementResult);
    void OnSuccess_7AC0B7774703D848FDEF7AA74633C70F(void* MovementResult);
    void OnFail_8791C1FE44A6115CE2770AB7CCAE59E0(void* MovementResult);
    void OnSuccess_8791C1FE44A6115CE2770AB7CCAE59E0(void* MovementResult);
    void OnFail_8B0333E1440FF4905DC9359C9A9EC6A2(void* MovementResult);
    void OnSuccess_8B0333E1440FF4905DC9359C9A9EC6A2(void* MovementResult);
    void OnFail_F344A1CC495A44159CF9CE818A2CF9E5(void* MovementResult);
    void OnSuccess_F344A1CC495A44159CF9CE818A2CF9E5(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Mrs_Puff_Wander_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
