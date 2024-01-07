#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Game_Blueprints_Rock_Stalagmite_BP {
#pragma pack(push, 1)
struct Rock_Stalagmite_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_Bust();
    _Script_Engine::StaticMeshComponent*& get_Broken();
    _Script_Engine::BoxComponent*& get_Box();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void Bust_Stalagmite();
    void ExecuteUbergraph_Rock_Stalagmite_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
