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
namespace _Game_Blueprints_Doodle_Bob_BP {
#pragma pack(push, 1)
struct Doodle_Bob_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Pencil_6();
    _Script_Engine::StaticMeshComponent*& get_Doodle_Bob_Back();
    _Script_Engine::StaticMeshComponent*& get_Doodle_Bob_Front();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::StaticMeshComponent*& get_Pencil_5();
    _Script_Engine::StaticMeshComponent*& get_Erase_Player_3();
    _Script_Engine::StaticMeshComponent*& get_Pencil_4();
    _Script_Engine::StaticMeshComponent*& get_Erase_Player_2();
    _Script_Engine::StaticMeshComponent*& get_Pencil_3();
    _Script_Engine::StaticMeshComponent*& get_Erase_Player();
    _Script_Engine::AudioComponent*& get_Chase_Music();
    _Script_Engine::AudioComponent*& get_Chase_Yell();
    _Script_Engine::StaticMeshComponent*& get_Pencil_2();
    _Script_Engine::StaticMeshComponent*& get_Pencil();
    _Script_Engine::AudioComponent*& get_Footsteps();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_2D61BEB942029170B9ED0AA61DAA3388(void* MovementResult);
    void OnSuccess_2D61BEB942029170B9ED0AA61DAA3388(void* MovementResult);
    void OnFail_80C60F28440FCC73D070A2AE0D1E5535(void* MovementResult);
    void OnSuccess_80C60F28440FCC73D070A2AE0D1E5535(void* MovementResult);
    void OnFail_9BC0BE194356C79ED2762AAB72230AA7(void* MovementResult);
    void OnSuccess_9BC0BE194356C79ED2762AAB72230AA7(void* MovementResult);
    void OnFail_DB8B392F4ACCC3B702E54EA0844CFB58(void* MovementResult);
    void OnSuccess_DB8B392F4ACCC3B702E54EA0844CFB58(void* MovementResult);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(_Script_Engine::Pawn* Pawn);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Doodle_Bob_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
