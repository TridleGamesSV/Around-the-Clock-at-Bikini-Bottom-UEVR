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
struct BoxComponent;
}
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Blueprints_Bessy_Boss_Phase_3_End_BP {
#pragma pack(push, 1)
struct Bessy_Boss_Phase_3_End_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Bucking_Audio();
    _Script_Engine::BoxComponent*& get_Fight_Box();
    _Script_Engine::StaticMeshComponent*& get_Circle();
    _Script_Engine::SphereComponent*& get_Sphere();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_Saver_Sub_Class();
    _Script_Engine::Actor*& get_Actor_To_Move();
    float& get_Speed();
    void* get_Gun_Offset();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_1E197A9547433EE0D65D9E825FC1F8E2(void* MovementResult);
    void OnSuccess_1E197A9547433EE0D65D9E825FC1F8E2(void* MovementResult);
    void OnFail_6BE602804E4775C5B56FE890667739DB(void* MovementResult);
    void OnSuccess_6BE602804E4775C5B56FE890667739DB(void* MovementResult);
    void OnFail_455113FA45406D97FBD326A6F2D2F6C1(void* MovementResult);
    void OnSuccess_455113FA45406D97FBD326A6F2D2F6C1(void* MovementResult);
    void OnFail_0F18E1034632ED415234BFBDE13775D2(void* MovementResult);
    void OnSuccess_0F18E1034632ED415234BFBDE13775D2(void* MovementResult);
    void OnFail_B0109FFD4B07A18476DB89815B211E9D(void* MovementResult);
    void OnSuccess_B0109FFD4B07A18476DB89815B211E9D(void* MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Bessy_Boss_Phase_3_End_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
