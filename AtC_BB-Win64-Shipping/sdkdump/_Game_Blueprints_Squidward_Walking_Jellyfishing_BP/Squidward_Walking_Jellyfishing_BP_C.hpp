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
namespace _Game_Blueprints_Squidward_Walking_Jellyfishing_BP {
#pragma pack(push, 1)
struct Squidward_Walking_Jellyfishing_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Clarinet();
    _Script_Engine::StaticMeshComponent*& get_Leg10();
    _Script_Engine::StaticMeshComponent*& get_Leg9();
    _Script_Engine::StaticMeshComponent*& get_Leg8();
    _Script_Engine::StaticMeshComponent*& get_Leg7();
    _Script_Engine::StaticMeshComponent*& get_Leg6();
    _Script_Engine::StaticMeshComponent*& get_Leg5();
    _Script_Engine::StaticMeshComponent*& get_Leg4();
    _Script_Engine::StaticMeshComponent*& get_Leg3();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::AudioComponent*& get_Walk();
    _Script_Engine::StaticMeshComponent*& get_Squidward();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_BCC17F9E4F36889B94D00B94CEFDCDF1(void* MovementResult);
    void OnSuccess_BCC17F9E4F36889B94D00B94CEFDCDF1(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Squidward_Walking_Jellyfishing_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
