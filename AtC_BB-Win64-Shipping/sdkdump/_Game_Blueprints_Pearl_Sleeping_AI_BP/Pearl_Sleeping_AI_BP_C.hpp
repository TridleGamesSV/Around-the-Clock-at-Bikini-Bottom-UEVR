#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Pearl_Sleeping_AI_BP {
#pragma pack(push, 1)
struct Pearl_Sleeping_AI_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh1();
    _Script_Engine::AudioComponent*& get_Snore_2();
    _Script_Engine::AudioComponent*& get_Snore_1();
    _Script_Engine::ParticleSystemComponent*& get_Zs();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_Pearl_Sleeping_AI_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
