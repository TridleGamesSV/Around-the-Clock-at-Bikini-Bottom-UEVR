#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Character.hpp"
namespace _Script_AIModule {
struct PawnSensingComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_HashSlingingSlasher_Walk_Window_Pink_Slip {
#pragma pack(push, 1)
struct HashSlingingSlasher_Walk_Window_Pink_Slip_C : public _Script_Engine::Character {
    void* get_UberGraphFrame();
    _Script_AIModule::PawnSensingComponent*& get_PawnSensing();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_HashSlingingSlasher_Walk_Window_Pink_Slip(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
