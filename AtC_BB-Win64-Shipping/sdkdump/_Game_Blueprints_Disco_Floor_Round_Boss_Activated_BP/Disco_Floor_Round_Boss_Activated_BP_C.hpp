#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Disco_Floor_Round_Boss_Activated_BP {
#pragma pack(push, 1)
struct Disco_Floor_Round_Boss_Activated_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere2();
    _Script_Engine::SphereComponent*& get_Sphere1();
    _Script_Engine::SphereComponent*& get_Sphere();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Disco_Floor_Round_Boss_Activated_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
