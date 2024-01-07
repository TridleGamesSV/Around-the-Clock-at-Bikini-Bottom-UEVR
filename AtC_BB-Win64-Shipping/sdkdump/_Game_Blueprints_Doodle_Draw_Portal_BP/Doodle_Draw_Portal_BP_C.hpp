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
namespace _Game_Blueprints_Doodle_Draw_Portal_BP {
#pragma pack(push, 1)
struct Doodle_Draw_Portal_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Circle_8();
    _Script_Engine::StaticMeshComponent*& get_Circle_7();
    _Script_Engine::StaticMeshComponent*& get_Circle_6();
    _Script_Engine::StaticMeshComponent*& get_Circle_5();
    _Script_Engine::StaticMeshComponent*& get_Circle_4();
    _Script_Engine::StaticMeshComponent*& get_Circle_3();
    _Script_Engine::StaticMeshComponent*& get_Circle_2();
    _Script_Engine::StaticMeshComponent*& get_Pencil();
    _Script_Engine::StaticMeshComponent*& get_Emerge_Behind();
    _Script_Engine::StaticMeshComponent*& get_Emerge();
    _Script_Engine::AudioComponent*& get_Audio();
    _Script_Engine::StaticMeshComponent*& get_Circle_1();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_Doodle_Draw_Portal_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
