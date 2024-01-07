#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
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
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Blueprints_Mr_Krussy_AI_Dining_BP {
#pragma pack(push, 1)
struct Mr_Krussy_AI_Dining_BP_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::StaticMeshComponent*& get_Krussy_5();
    _Script_Engine::StaticMeshComponent*& get_Krussy_4();
    _Script_Engine::StaticMeshComponent*& get_Krussy_3();
    _Script_Engine::StaticMeshComponent*& get_Krussy_2();
    _Script_Engine::StaticMeshComponent*& get_Krussy_1();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void OnFail_290385894D125C62BF5300AA49F2400D(void* MovementResult);
    void OnSuccess_290385894D125C62BF5300AA49F2400D(void* MovementResult);
    void OnFail_1FF64BEC4E0DF64066FA2394C548F812(void* MovementResult);
    void OnSuccess_1FF64BEC4E0DF64066FA2394C548F812(void* MovementResult);
    void OnFail_47C865494D46646D186CDCB654F971C7(void* MovementResult);
    void OnSuccess_47C865494D46646D186CDCB654F971C7(void* MovementResult);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ExecuteUbergraph_Mr_Krussy_AI_Dining_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
