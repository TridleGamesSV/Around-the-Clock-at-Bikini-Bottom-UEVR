#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Sandy_Kill_BP {
#pragma pack(push, 1)
struct Sandy_Kill_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::PointLightComponent*& get_Glow();
    _Script_Engine::AudioComponent*& get_Taunt();
    _Script_Engine::AudioComponent*& get_Attack();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Sandy_Kill_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
