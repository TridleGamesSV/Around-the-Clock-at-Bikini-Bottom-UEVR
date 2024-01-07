#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Mr_Krussy_AI_Dining_Flashed_BP {
#pragma pack(push, 1)
struct Mr_Krussy_AI_Dining_Flashed_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Krussy_5();
    _Script_Engine::StaticMeshComponent*& get_Krussy_4();
    _Script_Engine::StaticMeshComponent*& get_Krussy_3();
    _Script_Engine::StaticMeshComponent*& get_Krussy_2();
    _Script_Engine::StaticMeshComponent*& get_Krussy_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_5FF7351E473D69F1C24106B83E422583(void* MovementResult);
    void OnSuccess_5FF7351E473D69F1C24106B83E422583(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Mr_Krussy_AI_Dining_Flashed_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
