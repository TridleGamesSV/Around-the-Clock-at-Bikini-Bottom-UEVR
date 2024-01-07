#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Round_Lightbulb_Krabs_1_BP {
#pragma pack(push, 1)
struct Round_Lightbulb_Krabs_1_BP_C : public _Script_Engine::StaticMeshActor {
    _Script_Engine::PointLightComponent*& get_PointLight();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
}; // Size: 0x28
#pragma pack(pop)
}
