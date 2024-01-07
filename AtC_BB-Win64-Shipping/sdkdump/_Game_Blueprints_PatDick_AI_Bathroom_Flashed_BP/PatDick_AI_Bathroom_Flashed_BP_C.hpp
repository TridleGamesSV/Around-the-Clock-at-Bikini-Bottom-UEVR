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
namespace _Game_Blueprints_PatDick_AI_Bathroom_Flashed_BP {
#pragma pack(push, 1)
struct PatDick_AI_Bathroom_Flashed_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_PatDick_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_47783CB2410DA823E6019DB886DDCC46(void* MovementResult);
    void OnSuccess_47783CB2410DA823E6019DB886DDCC46(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PatDick_AI_Bathroom_Flashed_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
