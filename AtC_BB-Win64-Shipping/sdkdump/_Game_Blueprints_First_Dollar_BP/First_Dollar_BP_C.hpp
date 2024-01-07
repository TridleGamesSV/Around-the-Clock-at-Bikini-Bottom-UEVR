#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SaveGame;
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
namespace _Game_Blueprints_First_Dollar_BP {
#pragma pack(push, 1)
struct First_Dollar_BP_C : public _Script_Engine::StaticMeshActor {
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_Erase_7();
    _Script_Engine::StaticMeshComponent*& get_Erase_6();
    _Script_Engine::StaticMeshComponent*& get_Erase_5();
    _Script_Engine::StaticMeshComponent*& get_Erase_4();
    _Script_Engine::StaticMeshComponent*& get_Erase_3();
    _Script_Engine::StaticMeshComponent*& get_Erase_2();
    _Script_Engine::StaticMeshComponent*& get_Completely_Drawn();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SaveGame*& get_SaverSubClass();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void InpActEvt_Interact_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ExecuteUbergraph_First_Dollar_BP(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
