#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_HatchOpened_BP {
#pragma pack(push, 1)
struct HatchOpened_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Open();
    _Script_Engine::StaticMeshComponent*& get_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HatchOpened_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
