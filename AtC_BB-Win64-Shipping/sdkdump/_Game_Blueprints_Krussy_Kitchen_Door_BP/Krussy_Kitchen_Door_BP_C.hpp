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
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Blueprints_Krussy_Kitchen_Door_BP {
#pragma pack(push, 1)
struct Krussy_Kitchen_Door_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Door();
    _Script_Engine::AudioComponent*& get_Close();
    _Script_Engine::AudioComponent*& get_Open();
    _Script_Engine::StaticMeshComponent*& get_Animation_4();
    _Script_Engine::StaticMeshComponent*& get_Animation_3();
    _Script_Engine::StaticMeshComponent*& get_Animation_2();
    _Script_Engine::StaticMeshComponent*& get_Animation_1();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Krussy_Kitchen_Door_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
