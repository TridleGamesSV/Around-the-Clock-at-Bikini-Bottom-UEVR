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
struct BoxComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Alpha_Goo_BP {
#pragma pack(push, 1)
struct Alpha_Goo_BP_C : public _Script_Engine::Actor {
    void* get_UberGraphFrame();
    _Script_Engine::AudioComponent*& get_Audio();
    _Script_Engine::StaticMeshComponent*& get_Goo_7();
    _Script_Engine::StaticMeshComponent*& get_Goo_6();
    _Script_Engine::StaticMeshComponent*& get_Goo_5();
    _Script_Engine::StaticMeshComponent*& get_Goo_4();
    _Script_Engine::StaticMeshComponent*& get_Goo_3();
    _Script_Engine::StaticMeshComponent*& get_Goo_2();
    _Script_Engine::StaticMeshComponent*& get_Goo_1();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Alpha_Goo_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
