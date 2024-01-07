#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AmbientSound.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Blueprints_Larry_Lobster_Amb {
#pragma pack(push, 1)
struct Larry_Lobster_Amb_C : public _Script_Engine::AmbientSound {
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Larry_Lobster_Amb(int32_t EntryPoint);
}; // Size: 0x28
#pragma pack(pop)
}
