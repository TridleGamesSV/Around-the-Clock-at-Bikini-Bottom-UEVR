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
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Disco_Floor_Round_Boss_Activated_Dangerous_BP {
#pragma pack(push, 1)
struct Disco_Floor_Round_Boss_Activated_Dangerous_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::SphereComponent*& get_Sphere2();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void BndEvt__Sphere2_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Disco_Floor_Round_Boss_Activated_Dangerous_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
