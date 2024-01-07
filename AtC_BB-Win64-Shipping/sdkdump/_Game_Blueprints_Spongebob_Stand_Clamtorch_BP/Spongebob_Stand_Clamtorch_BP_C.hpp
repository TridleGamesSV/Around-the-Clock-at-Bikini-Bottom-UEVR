#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Spongebob_Stand_Clamtorch_BP {
#pragma pack(push, 1)
struct Spongebob_Stand_Clamtorch_BP_C : public _Script_Engine::Character {
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::StaticMeshComponent*& get_Clam_Torch();
    _Script_Engine::StaticMeshComponent*& get_Leg2();
    _Script_Engine::StaticMeshComponent*& get_Leg1();
    _Script_Engine::StaticMeshComponent*& get_Spongebob();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
