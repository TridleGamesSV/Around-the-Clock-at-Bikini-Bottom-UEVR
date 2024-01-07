#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Krabs_House_Amb_BP {
#pragma pack(push, 1)
struct Krabs_House_Amb_BP_C : public _Script_Engine::Actor {
    _Script_Engine::AudioComponent*& get_Amb();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x28
#pragma pack(pop)
}
