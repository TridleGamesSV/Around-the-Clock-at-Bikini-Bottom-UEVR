#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Boat_Idle {
#pragma pack(push, 1)
struct Boat_Idle_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Idle();
    _Script_Engine::PointLightComponent*& get_PointLight2();
    _Script_Engine::PointLightComponent*& get_PointLight1();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::SpotLightComponent*& get_SpotLight1();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::StaticMeshComponent*& get_Boat();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Boat_Idle(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
