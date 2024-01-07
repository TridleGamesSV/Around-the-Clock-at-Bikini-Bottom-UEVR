#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AudioComponent;
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
namespace _Game_Blueprints_Doodle_Squid_BP {
#pragma pack(push, 1)
struct Doodle_Squid_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Squished();
    _Script_Engine::StaticMeshComponent*& get_Back_Walk_4();
    _Script_Engine::StaticMeshComponent*& get_Back_Walk_3();
    _Script_Engine::StaticMeshComponent*& get_Front_Walk_4();
    _Script_Engine::StaticMeshComponent*& get_Front_Walk_3();
    _Script_Engine::StaticMeshComponent*& get_Back_Walk_2();
    _Script_Engine::StaticMeshComponent*& get_Front_Walk_2();
    _Script_Engine::StaticMeshComponent*& get_Back_Walk_1();
    _Script_Engine::StaticMeshComponent*& get_Front_Walk_1();
    _Script_Engine::AudioComponent*& get_Idle();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_BB0331CC45D34C1F45E98F94E262C276(void* MovementResult);
    void OnSuccess_BB0331CC45D34C1F45E98F94E262C276(void* MovementResult);
    void OnFail_B61A2FEF4BCD533A7DBEDC99A3F6A591(void* MovementResult);
    void OnSuccess_B61A2FEF4BCD533A7DBEDC99A3F6A591(void* MovementResult);
    void OnFail_5FF11F074E4DF4F22EFBFFA4B7C80D47(void* MovementResult);
    void OnSuccess_5FF11F074E4DF4F22EFBFFA4B7C80D47(void* MovementResult);
    void OnFail_35963D8F4AE8083D4D3E2C8F56311D05(void* MovementResult);
    void OnSuccess_35963D8F4AE8083D4D3E2C8F56311D05(void* MovementResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Doodle_Squid_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
