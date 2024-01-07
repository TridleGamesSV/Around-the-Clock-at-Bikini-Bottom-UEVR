#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Boulder_Gate_Fall_2_BP {
#pragma pack(push, 1)
struct Boulder_Gate_Fall_2_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Boulder_Gate_Fall_2_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
