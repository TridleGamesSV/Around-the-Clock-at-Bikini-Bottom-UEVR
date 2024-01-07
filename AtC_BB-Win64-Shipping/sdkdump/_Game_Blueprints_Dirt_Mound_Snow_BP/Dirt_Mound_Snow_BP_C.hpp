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
struct SceneComponent;
}
namespace _Game_Blueprints_Dirt_Mound_Snow_BP {
#pragma pack(push, 1)
struct Dirt_Mound_Snow_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Dirt_Mound();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_Dirt_Mound_Snow_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
