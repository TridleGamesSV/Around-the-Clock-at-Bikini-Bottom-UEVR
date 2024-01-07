#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Phone_Call_Random_1_BP {
#pragma pack(push, 1)
struct Phone_Call_Random_1_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Skip();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Interact_Phone();
    void ExecuteUbergraph_Phone_Call_Random_1_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
