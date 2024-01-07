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
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct AudioComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Iron_Dogfish_Boss_Health_0_BP {
#pragma pack(push, 1)
struct Iron_Dogfish_Boss_Health_0_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::CameraComponent*& get_Camera();
    _Script_Engine::ParticleSystemComponent*& get_Blood();
    _Script_Engine::AudioComponent*& get_Scream();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Iron_Dogfish_Boss_Health_0_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
