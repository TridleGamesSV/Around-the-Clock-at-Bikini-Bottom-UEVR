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
namespace _Game_Blueprints_Patrick_Run_Back_BP {
#pragma pack(push, 1)
struct Patrick_Run_Back_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Arm2();
    _Script_Engine::StaticMeshComponent*& get_Arm1();
    _Script_Engine::StaticMeshComponent*& get_Leg10();
    _Script_Engine::AudioComponent*& get_Walk();
    _Script_Engine::StaticMeshComponent*& get_Leg9();
    _Script_Engine::StaticMeshComponent*& get_Leg8();
    _Script_Engine::StaticMeshComponent*& get_Leg7();
    _Script_Engine::StaticMeshComponent*& get_Leg6();
    _Script_Engine::StaticMeshComponent*& get_Leg5();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Patrick();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_F9A442164A22FC50334D8DB0AB675A60(void* MovementResult);
    void OnSuccess_F9A442164A22FC50334D8DB0AB675A60(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Patrick_Run_Back_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
