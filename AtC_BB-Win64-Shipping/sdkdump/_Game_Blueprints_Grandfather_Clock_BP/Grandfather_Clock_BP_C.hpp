#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
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
struct SceneComponent;
}
namespace _Game_Blueprints_Grandfather_Clock_BP {
#pragma pack(push, 1)
struct Grandfather_Clock_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Frame_3();
    _Script_Engine::StaticMeshComponent*& get_Frame_2();
    _Script_Engine::StaticMeshComponent*& get_Frame_1();
    _Script_Engine::AudioComponent*& get_Clock_Ticking_Reverb();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_Grandfather_Clock_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
