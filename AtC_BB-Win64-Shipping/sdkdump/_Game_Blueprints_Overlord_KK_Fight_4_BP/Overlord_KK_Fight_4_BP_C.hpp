#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SaveGame;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Overlord_KK_Fight_4_BP {
#pragma pack(push, 1)
struct Overlord_KK_Fight_4_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_EnemyHealth();
    _Script_Engine::SaveGame*& get_SaverSubClass();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Overlord_KK_Fight_4_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
